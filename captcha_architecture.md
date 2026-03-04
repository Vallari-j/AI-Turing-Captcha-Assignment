# CAPTCHA Architecture

CAPTCHA (Completely Automated Public Turing Test to Tell Computers and Humans Apart) is used to differentiate humans from automated bots.

## Components

1. CAPTCHA Generator
Creates distorted images or puzzles.

2. Challenge Database
Stores images, puzzles, or questions.

3. User Interface
Displays the CAPTCHA challenge to the user.

4. Validation System
Checks whether the user response is correct.

5. Security Module
Prevents automated bots from bypassing the system.

## Architecture Design

User → CAPTCHA Interface → Challenge Generator → User Input → Validation Engine → Access Granted/Denied

## Working Process

1. User tries to access a service
2. System generates CAPTCHA challenge
3. User enters solution
4. Validation system checks answer
5. If correct, access is granted
6. If incorrect, a new CAPTCHA is generated
