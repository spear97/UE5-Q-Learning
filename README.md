# UE5 Q-Learning

This is a Remake of the Senior Design Capstone that was created for the Spring Semester of 2022 at Texas Wesleyan University. I scaled down the Scope of the application, and the overall simulation focused on getting an AI Agent to Navigate a Maze to reach the location of a Goal in a Maze using Reinforcement Learning vi the Q-Learning Algorithm. 

## Table of Contents
- [Description](#description)
- [Reinforcement Learning](#reinforcement-learning)
- [Q-Learning](#q-learning)
- [Running](#running)

## Description

This project implements Q-Learning to be able to better Navigate its environment, so that it can simulate the behaviors and actions would take place if user were controlling it instead. The purpose of the project is to illustrate how Q-Learning is able to be implemented in Unreal Engine 5 via C++ using File I/O that is updated after the Simulation is terminated. 

This project can be used to study how Q-Learning can be used and how it could be applied to be able to further advance the Game AI, so that it can be Dynamic and unpredicatable versus Static and Predictable. 

## Reinforcement Learning

Reinforcement is described as: "a type of machine learning technique that enables an agent to learn in an interactive environment by trial and error using feedback from its own actions and experiences" - TowardsDataScience. 

Using Reinforcement Learning allows for the AI to learn from interacting with any existing other AI and/or other objects/obstacles that exist with the environment. This allows for AI to become both Dynamic with their Environmental Behaviors and to become more unpredictable in the actions that they take. Thus, simulating the way users would control game characters to navigate around an enivornments that they are playing in; and prevents the AI from solely relying on conditions for it to behave accordingly within its given environment and from becoming static and predictable to the point

## Q-Learning

Q-Learning is a Reinforce Learning Policy that is based on the idea that an AI learns "...entirely by reinforcement learning and self-play, and [to] achieved a super-human level of play"- DeepMind Technologies/University of Toronto.

The way in which Q-Learning allows this to occur is through the use of a n x m Matrix called Q. Q contains data on behaviors for the given agent based on two indices referred to as State and Action.

A State is the condition in which an AI Agent is currently under. For example if the Agent is idling, then its state would be idle; or if an AI Agent is moving, then the AI its state would be moving. In the Q Matrix, States are represented as row(s) n of Q. The are the conditions that the AI Agent are currently categorized under that store the results of the actions that the AI agent has taken in the past, and allow for Agents to determine the best action for them to take moving on forward.

An Action is the act or behavior that an AI Agent takes that during the duration of its lifespan. For example if an AI agent decides to move forward, it would be taking an action referred to by as forward, the same would be true if it decided to go backwards, left, or right. Upon an AI Agent performing an action within the environment, a value is calculate in column m of the current state and feedback is given back to it. This feed back is referred as a Reward and is categorized in one of two ways:

1. Positive referring to an Action that an AI agent takes for its current State that its supposed to take. This Reward is denoted as a value that is greater than zero (x > 0).
2. Negative referring to an Action that an AI agent takes for its current State that its not supposed to take. This Reward is denoted as a value that is less than zero (x < 0).

Upon the give feedback, the AI agent calculates the information that it has received to update the current value for the given State (denoted as S) and Action (denoted as A) using the following policy: Q_new= Q_curr+α(r(s,a)+γMaxQ(s,a)-Q(s,a)).

With two scalar factors being used to ensure that that AI agent doesn't learn too quickly, and overshot human intelligence.

  1. Learning Discount (represented as the Greek Letter Gamma) being to what degree that the AI Agent cares about the reward that it is given
  2. Learning Rate (represented as the Greek Letter Alpha) the rate that the AI Agent Learning what actions work best for each environment

An example of where this policy could be used would be if an AI agent was being trained to cross the road. In this instance, the AI would have two States. Those States being Idle and Moving, and the Actions would be moving Left, Right, Forwards, and Backwards. If an AI agent made it closer to getting to the other side of the road and not get hit, then it would receive a positive reward. If an AI Agent was further away from the other side of the street than it's closest score or if it got hit by a car, then it would receive a negative reward.


## Running

The Simulation can be run by downloading on either QLProj-Windows (for Windows Devices), QLProject-Linxu-ARM64 (for Linux-64-Bit Devices), or QLProject-Linux(Linux-32-bit Dvices) zip files, extracting the zip's contents from the zip file, runnng the .exe file named "QLProject". Once run, the Simulation will run, and you will be able to see the AI Agent Navigate its environment in Real-Time. 

At this current time, there does not exist a working version for MacOS. However, if you are using a MacOS, you can clone the project, open up the project using Unreal Engine 5, and upon the project opening on Mac, you can pack the project by naviagating to the Platoforms button on Unreal's UI, clicking on it, navigate over to Mac, and direct it to the package that you would like for it to build to.
