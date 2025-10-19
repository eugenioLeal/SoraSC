# Setup a Reviewable team member

when you have file changes that requires review

simply assign to a reviewer with all privilages (hands responsibility to trusted member)

sora create-reviewable-team-member john_doe --assign-to jane_smith

if you want file changes by chain of approval (final approval by captain)

sora create-reviewable-team-member-chain sam_wilson --assign-to jane_smith

if you want changes to be approved by the project captain

sora create-reviewable-team-member anna_jones --assign-to captain
