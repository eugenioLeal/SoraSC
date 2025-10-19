Sora is a simple code sharing tool that is designed for small teams.

The objective of the project is to have less friction than soure control (git) when working with project sharing.

The project files syncronize between all the core team members (trusted members)

You can set a [review workflow](reviewable_team_member_workflow.md) for files that must be reviewed (untrusted member)

The hierarchy of the control of changes is a simple tree 

                 captain
                /    |    \
       ┌────────┘    |     └────────┐
team_member_1   team_member_2   team_member_3


This is the simple way of working

When file conflicts/collisions occur they should not interrupt your workflow.
Instead they should be handled at your own pace by handling file differences.




