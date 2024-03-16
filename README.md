## UE5 Q-Learning

This project is a recreation of the Senior Design Capstone developed during the Spring Semester of 2022 at Texas Wesleyan University. The scope has been reduced to focus on an AI Agent navigating an Environment to reach a goal using Reinforcement Learning through the Q-Learning Algorithm.

Table of Contents
- [Description](#Description)
- [Reinforcement-Learning](#Reinforcement-Learning)
- [Q-Learning](#Q-Learning)
- [Running](#Running)

## Description

The aim of this project is to demonstrate Q-Learning's implementation within Unreal Engine 5 (UE5) using C++ and File I/O for updating after simulation termination. The project showcases how Q-Learning enhances an AI's ability to navigate its environment, simulating user behaviors and actions as if they were controlling it.

This implementation serves as a study tool to explore how Q-Learning can advance Game AI, making it dynamic and unpredictable rather than static and foreseeable.

## Reinforcement-Learning

Reinforcement Learning is defined as "a type of machine learning technique that enables an agent to learn in an interactive environment by trial and error using feedback from its own actions and experiences" (TowardsDataScience).

Utilizing Reinforcement Learning allows the AI to learn from interactions with other AI entities, objects, and obstacles within its environment. This fosters dynamic environmental behaviors in the AI, making its actions unpredictable. This simulation mirrors how users control game characters, navigating through environments. It prevents the AI from relying solely on pre-set conditions, ensuring it does not become static and predictable.

## Q-Learning

Q-Learning is a Reinforcement Learning Policy that, as DeepMind Technologies/University of Toronto describes, learns "entirely by reinforcement learning and self-play, and [to] achieve a super-human level of play."

Q-Learning operates through an n x m matrix called Q, storing data on an agent's behaviors based on two indices: State and Action.

    State: This represents the current condition of an AI Agent. For instance, if the agent is idling, its state would be "idle"; if it's moving, the state would be "moving." States in the Q Matrix are rows, categorizing the conditions under which the AI Agent currently operates. These states store the results of past actions, aiding the agent in determining the best course of action.

    Action: Actions are the behaviors an AI Agent performs during its lifespan. For example, moving forward, backward, left, or right are actions the agent might take. When an AI Agent performs an action, a value is calculated in the current state's m column, providing feedback. This feedback, called a Reward, falls into two categories:
        Positive Reward: Given for an action an AI agent takes that aligns with its current State. Denoted by a value greater than zero (x > 0).
        Negative Reward: Given for an action an AI agent takes that does not align with its current State. Denoted by a value less than zero (x < 0).

Upon receiving feedback, the AI agent updates the current value for the given State (S) and Action (A) using the following policy:

    Q_new = Q_curr + α(r(s,a) + γMaxQ(s,a) - Q(s,a))

Two scalar factors are used to prevent the AI from learning too quickly and surpassing human intelligence:

    Learning Discount (γ): Determines how much the AI Agent values the reward.
    Learning Rate (α): Dictates how quickly the AI Agent learns the best actions for each environment.
