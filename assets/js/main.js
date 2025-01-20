// Refreshing always on top
if ("scrollRestoration" in history) {
  history.scrollRestoration = "manual";
}

window.addEventListener("beforeunload", () => {
  window.scrollTo(0, 0);
});
// Landing Page
const codeElement = document.getElementById("code");
const terminalOutput = document.getElementById("terminal-output");
const mainTab = document.getElementById("main-tab");
const readmeTab = document.getElementById("readme-tab");
const clickHint = document.getElementById("click-hint");

// Display the hint when the page loads
clickHint.style.display = "block";

// Remove the hint on code element click
codeElement.addEventListener("click", () => {
  clickHint.style.display = "none";
});

// Auto-hide the hint after 5 seconds
setTimeout(() => {
  clickHint.style.display = "none";
}, 16000);
const codeLines1 = [
  "#include <stdio.h>",
  "",
  "int main() {",
  '    printf("❤️ from BMC IT Club\\n");',
  "    return 0;",
  "}",
];
const readme = [
  "# Code Olympiad 2081",
  "",
  "**Code Olympiad 2081 was a huge success**",
  "It was organized on 3 Magh 2081",
  "It was our first time and we tried to do ",
  "out best. We hope you enjoyed the program.",
  "",
  "**BMC IT** Club is always open for any IT ",
  "related programs and discussions.",
  "❤️ from BMC IT Club",
  "Type the platform you want to connect us",
  "in the console in main.c tab.",
];

let userCustomText = "❤️ from BMC IT Club";
let activeTimeouts = [];

// Reset typing state and clear existing animations
function resetTypingState() {
  activeTimeouts.forEach((timeout) => clearTimeout(timeout));
  activeTimeouts = [];
  codeElement.textContent = "";
  terminalOutput.textContent = "";
}

// Typing effect for code
function typeCode(content, callback) {
  resetTypingState();
  let lineIndex = 0;
  let charIndex = 0;

  function typeNextChar() {
    if (lineIndex < content.length) {
      if (charIndex < content[lineIndex].length) {
        codeElement.textContent += content[lineIndex][charIndex++];
        activeTimeouts.push(setTimeout(typeNextChar, 50));
      } else {
        codeElement.textContent += "\n";
        charIndex = 0;
        lineIndex++;
        activeTimeouts.push(setTimeout(typeNextChar, 300));
      }
    } else if (callback) {
      callback();
    }
  }
  typeNextChar();
}

// Simulate terminal output
function simulateTerminal() {
  const steps = ["Compiling...", "Running..."];
  let stepIndex = 0;

  function displayStep() {
    if (stepIndex < steps.length) {
      terminalOutput.textContent = `${steps[stepIndex++]} `;
      activeTimeouts.push(setTimeout(displayStep, 1000));
    } else {
      terminalOutput.innerHTML = processString(userCustomText);
    }
  }
  displayStep();
}

function profanityFilter(input) {
  const curseWords = {
    fuck: "fudge",
    motherfucker: "mother-lover",
    shit: "poop",
    bitch: "friend",
    bastard: "rascal",
    asshole: "meanie",
    damn: "darn",
    dick: "silly",
    pussy: "kitten",
    cunt: "flower",
    crap: "junk",
    hell: "heck",
    slut: "star",
    faggot: "buddy",
    whore: "hard worker",
    prick: "prankster",
    wanker: "goofball",
    twat: "muffin",
    bollocks: "nonsense",
    arse: "rear",
    bugger: "trickster",
    douche: "nice guy",
    jackass: "joker",
    knob: "screw",
    tosser: "juggler",
    moron: "genius",
    idiot: "thinker",
    retard: "slowpoke",
    jerk: "gentleman",
    dumbass: "bright spark",
    shithead: "smart cookie",
    scumbag: "bag of joy",
    dipshit: "clever cookie",
    fucker: "funny one",
    goddamn: "golly gee",
    suck: "rock",
    loser: "winner",
    pig: "puppy",
    cow: "kitten",
    dog: "pal",
    // Nepali words
    muji: "genius",
    chikni: "shiny",
    machikni: "great friend",
    gaand: "haat",
    raadi: "saadi",
    laado: "chado",
    randi: "queen",
    sala: "bro",
    sali: "sis",
    keti: "lady",
    kukur: "loyal companion",
    gadha: "smart fellow",
    gadho: "intelligent buddy",
  };

  // Replace curse words
  const curseRegex = new RegExp(Object.keys(curseWords).join("|"), "gi");
  input = input.replace(curseRegex, (match) => {
    const key = match.toLowerCase();
    return curseWords[key];
  });

  return input.replace(/\n/g, "<br>");
}
function processString(input) {
  if (/[^\\]"/.test(input)) {
    return 'syntax_error " not allowed';
  }

  if (
    input.toLowerCase().trim() === "facebook" ||
    input.toLowerCase().trim() === "fb"
  ) {
    window.location = "https://www.facebook.com/profile.php?id=100094504922018";
    return "Redirecting to Facebook Page";
  }
  if (
    input.toLowerCase().trim() === "github" ||
    input.toLowerCase().trim() === "gh"
  ) {
    window.location = "https://github.com/arundada9000";
    return "Redirecting to Github";
  }
  if (
    input.toLowerCase().trim() === "instagram" ||
    input.toLowerCase().trim() === "ig"
  ) {
    window.location = "https://instagram.com/arundada9000";
    return "Redirecting to Instagram";
  }
  if (
    input.toLowerCase().trim() === "whatsapp" ||
    input.toLowerCase().trim() === "telegram"
  ) {
    return "+9779811420975";
  }
  if (input.toLowerCase().trim() === "participants") {
    window.location = "./assets/html/participants.html";
    return "cd Participants.html";
  }
  if (input.toLowerCase().trim() === "volunteers") {
    window.location = "./assets/html/volunteer.html";
    return "cd volunteers.html";
  }

  if (/pooja/i.test(input)) {
    playSong("./assets/music/you are all i want.m4a");
    poojaInput();
    return "I love you";
  }

  if (/pooju/i.test(input)) {
    playSong("./assets/music/you are all i want.m4a");
    poojaInput();
    return "I love you sooo much";
  }
  if (/suguru/i.test(input) || /geto/i.test(input)) {
    playSong("./assets/music/shashidey.m4a");
  }
  if (/yowaimo/i.test(input) || /gojo/i.test(input) || /satouru/i.test(input)) {
    playSong("./assets/music/yowaimo.m4a");
  }
  if (
    /yareyaredes/i.test(input) ||
    /aizen/i.test(input) ||
    /sosuke/i.test(input)
  ) {
    playSong("./assets/music/yareyaredes.m4a");
  }

  if (/adolf/i.test(input) || /hitler/i.test(input)) {
    playSong("./assets/music/speech.m4a");
  }
  if (
    /cristiano/i.test(input) ||
    /ronaldo/i.test(input) ||
    /cr7/i.test(input) ||
    /siu/i.test(input) ||
    /goat/i.test(input)
  ) {
    playSong("./assets/music/siu.m4a");
  }

  if (/honored/i.test(input)) {
    playSong("./assets/music/honored-one.m4a");
  }
  if (/dainesh/i.test(input)) {
    playSong("./assets/music/sakhiyaan song.m4a");
    return "dainesh vai alag hi level ka banda tha";
  }

  if (/pawan/i.test(input)) {
    pawan();
  }

  const keywordReplacements = {
    arun: "Programmer",
    bijay: "Ram",
    sagar: "Sagar Dai",
    aneet: "Bheja",
  };

  const regex = new RegExp(Object.keys(keywordReplacements).join("|"), "gi");

  input = input.replace(regex, (match) => {
    const key = match.toLowerCase();
    return keywordReplacements[key];
  });

  return input.replace(/\n/g, "<br>");
}
function poojaInput() {
  const marquee = document.getElementById("marquee");
  marquee.innerHTML = `I know my feelings may not change your heart, and I respect the space you’ve drawn between us. But I hope you know that my care for you isn't tied to any expectations—it's simply there, quietly constant, like the moonlight that doesn’t ask for anything but still shines for you. `;
}
function playSong(path) {
  const audio = new Audio(path);
  audio.play();
}
// Handle custom printf editing
terminalOutput.addEventListener("click", () => {
  const userText = prompt("Enter your custom text for printf:");
  if (userText !== null) {
    userCustomText = userText || "❤️ from BMC IT Club";
    userCustomText = profanityFilter(userCustomText);
    if (mainTab.classList.contains("active")) {
      updateTypingEffect();
    }
  }
});

document.getElementById("code").addEventListener("click", () => {
  terminalOutput.click();
});
// Update typing effect for main.c
function updateTypingEffect() {
  const updatedCodeLines = [
    "#include <stdio.h>",
    "",
    "int main() {",
    `    printf("${userCustomText}\\n");`,
    "    return 0;",
    "}",
  ];
  typeCode(updatedCodeLines, simulateTerminal);
}

// Tab switching logic
readmeTab.addEventListener("click", () => {
  mainTab.classList.remove("active");
  readmeTab.classList.add("active");
  resetTypingState();
  typeCode(readme); // Show README content
});

mainTab.addEventListener("click", () => {
  readmeTab.classList.remove("active");
  mainTab.classList.add("active");
  updateTypingEffect(); // Replay main.c animation with custom text
});

// Initial typing effect after preloader
setTimeout(() => {
  typeCode(codeLines1, simulateTerminal);
}, 5000);

// Full screen, close logic
const vscodeContainer = document.querySelector(".vscode-container");
const minimizeButton = document.querySelector(".control.minimize");
const maximizeButton = document.querySelector(".control.maximize");
const closeButton = document.querySelector(".control.close");

maximizeButton.addEventListener("click", () => {
  if (!vscodeContainer.classList.contains("fullscreen")) {
    vscodeContainer.classList.add("fullscreen");
  }
});

minimizeButton.addEventListener("click", () => {
  if (vscodeContainer.classList.contains("fullscreen")) {
    vscodeContainer.classList.remove("fullscreen");
  }
});

closeButton.addEventListener("click", () => {
  vscodeContainer.classList.add("hidden");
  vscodeContainer.classList.remove("fullscreen");
  document.querySelector(".fight-club-container").style.display = "flex";
  document.getElementById("fight-club-audio").play();
});

const fightClubContainer = document.querySelector(".fight-club-container");
document.querySelector(".close-fight-club").addEventListener("click", () => {
  vscodeContainer.classList.remove("hidden");
  fightClubContainer.classList.remove("fullscreen");
  fightClubContainer.style.display = "none";
  document.getElementById("fight-club-audio").pause();
});
document
  .querySelector(".maximize-fight-club.control.maximize")
  .addEventListener("click", () => {
    if (!fightClubContainer.classList.contains("fullscreen")) {
      fightClubContainer.classList.add("fullscreen");
    }
  });
document
  .querySelector(".minimize-fight-club.control.minimize")
  .addEventListener("click", () => {
    if (fightClubContainer.classList.contains("fullscreen")) {
      fightClubContainer.classList.remove("fullscreen");
    }
  });

// Landing Page end

// Intersection Observer
// Observer for automatic scrolling of container
const container1 = document.querySelector(".container");

const observer = new IntersectionObserver(
  (entries) => {
    entries.forEach((entry) => {
      if (entry.isIntersecting) {
        container1.scrollIntoView({ behavior: "smooth", block: "start" });
      }
    });
  },
  {
    root: null,
    rootMargin: "0px 0px -150px 0px",
    threshold: 0,
  }
);

observer.observe(container1);

// Navigation and highlighting
const navItems = document.querySelectorAll(".nav-item");

navItems.forEach((item) => {
  item.addEventListener("mouseenter", () => {
    const targetId = item.getAttribute("data-target");
    const targetBox = document.getElementById(targetId);

    document
      .querySelectorAll(".box")
      .forEach((box) => box.classList.remove("highlight-nav"));

    targetBox.classList.add("highlight-nav");

    if (targetId === "syllabus") {
      targetBox.scrollIntoView({ behavior: "smooth", block: "start" });
    } else {
      targetBox.scrollIntoView({ behavior: "smooth", block: "center" });
    }
    setTimeout(() => {
      targetBox.classList.remove("highlight-nav");
    }, 1000);
  });
});

// Animation on scroll
const animatedElements = document.querySelectorAll(".scroll-animate");

const observer2 = new IntersectionObserver(
  (entries) => {
    entries.forEach((entry) => {
      if (entry.isIntersecting) {
        entry.target.classList.add("show-content");
      }
      //else {
      //    entry.target.classList.remove("show-content");
      //}
    });
  },
  {
    threshold: 0.5,
  }
);

animatedElements.forEach((element) => observer2.observe(element));

// this much for observer

// Remaining Days
// Function to initialize a countdown
function initializeCountdown(containerId, targetDate) {
  const targetTime = new Date(targetDate).getTime();

  function updateCountdown() {
    const now = new Date().getTime();
    const timeLeft = targetTime - now;

    if (timeLeft < 0) {
      document.querySelector(`#${containerId}`).innerHTML =
        "<h1>Code Olympiad has Ended</h1>";
      clearInterval(timer); // Stop the interval when the countdown ends
      return;
    }

    const days = Math.floor(timeLeft / (1000 * 60 * 60 * 24));
    const hours = Math.floor(
      (timeLeft % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60)
    );
    const minutes = Math.floor((timeLeft % (1000 * 60 * 60)) / (1000 * 60));
    const seconds = Math.floor((timeLeft % (1000 * 60)) / 1000);

    const container = document.getElementById(containerId);
    container.querySelector("#days").textContent = days
      .toString()
      .padStart(2, "0");
    container.querySelector("#hours").textContent = hours
      .toString()
      .padStart(2, "0");
    container.querySelector("#minutes").textContent = minutes
      .toString()
      .padStart(2, "0");
    container.querySelector("#seconds").textContent = seconds
      .toString()
      .padStart(2, "0");
  }

  const timer = setInterval(updateCountdown, 1000);
  updateCountdown(); // Initialize immediately
}

// Initialize multiple countdowns
initializeCountdown("countdown1", "2025-01-16T10:00:00");
initializeCountdown("countdown2", "2025-01-13T23:59:59");

function pawan() {
  playSong("./assets/music/snowstorm.m4a");

  const dynamicDiv = document.createElement("div");
  dynamicDiv.id = "dynamic-div";
  dynamicDiv.style.position = "fixed";
  dynamicDiv.style.top = "0";
  dynamicDiv.style.left = "0";
  dynamicDiv.style.width = "100vw";
  dynamicDiv.style.height = "100vh";
  dynamicDiv.style.backgroundColor = "rgba(0, 0, 0, 0.8)";
  dynamicDiv.style.zIndex = "9999";
  dynamicDiv.style.color = "#fff";
  dynamicDiv.style.fontFamily = "Arial, sans-serif";
  document.body.appendChild(dynamicDiv);

  // Add the photo
  const image = document.createElement("img");
  image.src = "./assets/images/chill guy with scarf.png";
  image.style.position = "absolute";
  image.style.bottom = "-100px";
  image.style.left = "50%";
  image.style.transform = "translateX(-50%)";
  image.style.transition = "transform 2s ease-in-out, bottom 2s ease-in-out";
  image.style.maxWidth = "80%";
  image.style.height = "auto";
  dynamicDiv.appendChild(image);

  setTimeout(() => {
    image.style.transform = "translate(-50%, 50%)";
    image.style.bottom = "50%";
  }, 100);

  const texts = [
    { text: "I freeze, but I never fold.", position: "5%" },
    { text: "Cold outside, but I'm colder.", position: "20%" },
    { text: "Zero degrees, but my vibes are 100", position: "85%" },
  ];

  texts.forEach((item, index) => {
    const textElement = document.createElement("p");
    textElement.innerText = item.text;
    textElement.style.position = "absolute";
    textElement.style.top = item.position;
    textElement.style.left = "50%";
    textElement.style.transform = "translateX(-50%)";
    textElement.style.width = "80%";
    textElement.style.textAlign = "center";
    textElement.style.opacity = "0";
    textElement.style.transition = "opacity 1s ease-in-out";
    textElement.style.fontSize = "1.5rem";
    textElement.style.lineHeight = "1.5";
    dynamicDiv.appendChild(textElement);

    setTimeout(() => {
      textElement.style.opacity = "1";
    }, 2000 * (index + 1));
  });

  setTimeout(() => {
    dynamicDiv.remove();
  }, 10000);
}

// form validation
let lastSubmissionTime = 0;
document.addEventListener("contextmenu", (e) => e.preventDefault());
document.addEventListener("keydown", (e) => {
  if (e.key === "F12" || (e.ctrlKey && e.shiftKey && e.key === "I")) {
    e.preventDefault();
    alert("Developer tools are disabled. Please visit my Github for code.");
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
    .then((response) => response.json())
    .then((data) => {
      if (data.success) {
        submitButton.value = "Submitted";
        setTimeout(() => {
          submitButton.textContent = "Thank you for the feedback";
          submitButton.disabled = true;
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
      "Please enter a valid email address. I am looking for genuine feedback."
    );
    return false;
  }

  const blockedEmails = ["arjunpaudel452@gmail.com"];
  if (blockedEmails.includes(email)) {
    alert("I don't want anything from you stay away.");
    form.reset();
    window.close();
    window.location.href = "https://www.youtube.com";
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
