let lastSubmissionTime = 0;
document.addEventListener("contextmenu", (e) => e.preventDefault());
document.addEventListener("keydown", (e) => {
  if (e.key === "F12" || (e.ctrlKey && e.shiftKey && e.key === "I")) {
    e.preventDefault();
    alert("Developer tools are disabled. Please don't try to mess with us.");
  }
});

document
  .getElementById("member-count")
  .addEventListener("input", function (event) {
    let value = event.target.value;

    if (!["1", "2", "3", "4"].includes(value)) {
      event.target.setCustomValidity("Only 1, 2, 3, or 4 are allowed");
      event.target.value = "";
    } else {
      event.target.setCustomValidity("");
    }
  });
// Countdown for registration deadline
const remainingDaysElement = document.getElementById("remainingDays");

function calculateRemainingDays() {
  const currentDate = new Date();
  const targetDate = new Date("2025-01-14");
  const difference = targetDate - currentDate;

  if (difference > 0) {
    const daysLeft = Math.floor(difference / (1000 * 60 * 60 * 24));
    remainingDaysElement.textContent = `${daysLeft} days left to register!`;
  } else {
    remainingDaysElement.textContent = "Registration closed!";
  }
}

calculateRemainingDays();

// Select styling
document.querySelectorAll(".styled-select").forEach((select) => {
  select.addEventListener("change", () => {
    if (select.value) {
      select.classList.add("filled");
    } else {
      select.classList.remove("filled");
    }
  });
});

// Campus
const selectedCampus = document.getElementById("selected-campus");
const customCampusContainer = document.getElementById(
  "custom-campus-container"
);
const customCampusInput = document.getElementById("custom-campus");
selectedCampus.addEventListener("change", () => {
  const selectedLanguage = selectedCampus.value;
  if (selectedLanguage === "other") {
    customCampusContainer.style.display = "block";
    customCampusInput.setAttribute("required", "true");
    paymentGateway(true);
  } else {
    customCampusContainer.style.display = "none";
    customCampusInput.removeAttribute("required", "true");
    paymentGateway(false);
  }
});

// Language
const preferredLanguage = document.getElementById("preferred-language");
const customLanguageContainer = document.getElementById(
  "custom-language-container"
);
const customLanguageInput = document.getElementById("custom-language");

preferredLanguage.addEventListener("change", () => {
  const selectedLanguage = preferredLanguage.value;
  if (selectedLanguage === "other") {
    customLanguageContainer.style.display = "block";
    customLanguageInput.setAttribute("required", "true");
  } else {
    customLanguageContainer.style.display = "none";
    customLanguageInput.removeAttribute("required", "true");
  }
});

//Payment Method
const paymentMethod = document.getElementById("payment-method");

paymentMethod.addEventListener("change", () => {
  const selectedPayment = paymentMethod.value;
  if (selectedPayment === "esewa") {
    document.querySelector(".esewa").style.display = "block";
    document.querySelector(".bank").style.display = "none";
  } else {
    document.querySelector(".bank").style.display = "block";
    document.querySelector(".esewa").style.display = "none";
  }
});
function paymentGateway(other) {
  if (other) {
    document.querySelector(".payment-gateways").style.display = "block";
    paymentMethod.setAttribute("required", "true");
  } else {
    document.querySelector(".payment-gateways").style.display = "none";
    paymentMethod.removeAttribute("required", "true");
  }
}
// Select elements
const photoThumbnail = document.getElementById("photo-thumbnail");
const photoFullscreen = document.getElementById("photo-fullscreen");
const closeBtn = document.getElementById("close-btn");

// Show fullscreen photo on click
photoThumbnail.addEventListener("click", () => {
  photoFullscreen.style.display = "flex";
});

// Close fullscreen photo
closeBtn.addEventListener("click", () => {
  photoFullscreen.style.display = "none";
});

// Close fullscreen when clicking outside the image
photoFullscreen.addEventListener("click", (event) => {
  if (event.target === photoFullscreen) {
    photoFullscreen.style.display = "none";
  }
});

document.getElementById("member-count").addEventListener("input", function () {
  let memberCount = parseInt(this.value) || 0;
  const membersContainer = document.getElementById("members-container");
  membersContainer.innerHTML = "";
  if (memberCount > 4) {
    memberCount = 4;
  }
  if (memberCount < 1) {
    memberCount = 1;
  }
  for (let i = 1; i <= memberCount; i++) {
    const memberDiv = document.createElement("div");
    memberDiv.classList.add("member-input");
    memberDiv.innerHTML = `
            <h3>Member ${i}</h3>
            <div class="form-group">
                <input name="Member-${i}-Name" type="text" id="member-${i}-name" placeholder=" " required>
                <label for="member-${i}-name">Name</label>
            </div>
            <div class="form-group">
                <select name="Member-${i}-Study" id="member-${i}-study" class="styled-select" required>
                    <option value="" disabled selected hidden></option>
                    <option value="11">11</option>
                    <option value="12">12</option>
                    <option value="1st Semester">1st Semester</option>
                    <option value="2nd Semester">2nd Semester</option>
                    <option value="3rd Semester">3rd Semester</option>
                    <option value="4th Semester">4th Semester</option>
                    <option value="5th Semester">5th Semester</option>
                    <option value="6th Semester">6th Semester</option>
                    <option value="7th Semester">7th Semester</option>
                    <option value="8th Semester">8th Semester</option>
                </select>
                <label for="member-${i}-study" class="floating-label">Current Study</label>
            </div>
            <div class="form-group">
                <input name="Member-${i}-Phone" type="tel" id="member-${i}-phone" placeholder=" " pattern="^(98|97)\\d{8}$">
                <label for="member-${i}-phone">Phone Number</label>
            </div>
        `;
    membersContainer.appendChild(memberDiv);
  }
});

const form = document.querySelector("form");
const submitButton = document.getElementById("submit-btn");

form.addEventListener("submit", async function (event) {
  event.preventDefault();

  const honeypot = document.getElementById("honeypot").value;

  if (honeypot) {
    alert("Spam detected! Submission blocked.");
    return false;
  }

  const now = Date.now();
  if (now - lastSubmissionTime < 30000) {
    alert("You are submitting too frequently. Please wait a while.");
    return false;
  }
  lastSubmissionTime = now;

  const email = document.getElementById("email").value;

  if (!(await validateEmailAndSubmit(email))) {
    return;
  }

  submitButton.textContent = "Submitting...";

  const formData = new FormData(form);

  fetch("https://api.web3forms.com/submit", {
    method: "POST",
    body: formData,
  })
    .then((response) => response.json()) // Parse response as JSON
    .then((data) => {
      if (data.success) {
        submitButton.value = "Submitted";
        setTimeout(() => {
          submitButton.textContent = "See you at BMC";
          submitButton.disabled = true; // Disable button
        }, 5000);
        form.reset();
      } else {
        submitButton.textContent = "Error, Try Again";
        console.error("Error:", data.message);
        setTimeout(() => {
          submitButton.textContent = "Submit";
        }, 5000);
      }
    })
    .catch((error) => {
      console.error("Error submitting form:", error);
      submitButton.value = "Error, Try Again";
      setTimeout(() => {
        submitButton.textContent = "Submit";
      }, 5000);
    });
});

// Check if the email is in a valid format
function isValidEmail(email) {
  const regex = /^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,6}$/;
  return regex.test(email);
}

async function validateEmailAndSubmit(email) {
  if (!isValidEmail(email)) {
    alert(
      "Please enter a valid email address. The format is crucial for processing your request."
    );
    return false;
  }

  const blockedEmails = ["arjunpaudel452@gmail.com"];
  if (blockedEmails.includes(email)) {
    alert("If you are that good then meet me at the challenge. You baaka.");
    form.reset();
    return false;
  }

  const apiKey = "907db0c5f52181f8a72aaf717afd1c5c";
  const apiUrl = `https://apilayer.net/api/check?access_key=${apiKey}&email=${email}`;

  try {
    const response = await fetch(apiUrl);
    const data = await response.json();

    if (data.format_valid && data.smtp_check) {
      return true;
    } else {
      alert(
        "This email is either invalid or cannot receive emails. Please use a valid email address."
      );
      return false;
    }
  } catch (error) {
    console.error("Error:", error);
    alert(
      "There was an error with the email verification process. Please try again later."
    );
    return false;
  }
}
