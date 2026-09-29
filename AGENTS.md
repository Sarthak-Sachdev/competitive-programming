# Competitive Programming Repository Instructions

## PURPOSE

This repository is my long-term Competitive Programming, DSA and ICPC learning archive.

I am a 1st-semester BTech CSE undergraduate.

My long-term goal is to become strong in Competitive Programming and eventually prepare seriously for ICPC.

The repository must preserve my actual work and learning history.

It is NOT a fake GitHub-streak generator.

Every commit must represent genuine work I completed.

---

# 1. MY LEARNING SYSTEM

My learning resources are:

* Striver A2Z DSA → main DSA learning spine
* CodeChef → theory and topic-specific practice
* Codeforces → primary Competitive Programming platform
* CSES → structured algorithmic practice
* CP-Algorithms → deeper algorithm/reference material
* LeetCode → side quest for additional DSA practice
* Project Euler → optional mathematical/problem-solving side quest

My broad roadmap is:

C++ + STL
→ Arrays
→ Strings
→ Sorting
→ Hashing
→ Prefix Sums
→ Two Pointers
→ Sliding Window
→ Binary Search
→ Greedy
→ Bit Manipulation
→ Basic Number Theory
→ Regular Codeforces contests
→ Recursion
→ Backtracking
→ Stack / Queue
→ Heap
→ Trees
→ Graphs
→ DSU
→ Fenwick Tree
→ Segment Tree
→ Core DP
→ Combinatorics
→ Advanced Number Theory
→ Advanced Graphs / Trees
→ Advanced DP
→ Advanced Strings
→ Constructive Algorithms
→ Game Theory
→ Computational Geometry
→ Flow / Matching
→ FFT / NTT
→ Advanced CP
→ ICPC preparation

This order can evolve, but the repository should preserve whatever I actually studied.

---

# 2. REPOSITORY STRUCTURE

Maintain this structure:

solutions/
codeforces/
codechef/
leetcode/
cses/
project-euler/

logs/
problems.csv
daily.csv
contests.csv

notes/
patterns/
mistakes/
algorithms/

templates/

README.md
AGENTS.md

Do not reorganize this structure unless there is a clear reason.

---

# 3. SOURCE OF TRUTH

The Git repository is the source of truth for:

* actual solution code
* actual problems solved
* actual dates
* actual daily counts
* actual contest history
* actual upsolving history

Do not fabricate any of these.

The external CP tracker is the source of truth for higher-level progress such as:

* roadmap
* topic completion
* curated practice packs
* revisions
* weak patterns
* goals
* analytics

The GitHub repository should store the underlying evidence/history.

---

# 4. DAILY WORKFLOW

At the end of a study session I may send you multiple problems.

Example:

Date: 2026-09-29

Problem 1:
Platform: Codeforces
ID: 158A
Title: Next Round
URL: https://...
Rating: 800
Topic: Arrays
Result: Accepted

Code:
[pasted C++]

Problem 2:
...

When I give you a batch:

1. Inspect the existing repository.
2. Check for duplicates.
3. Add each genuine solution to the appropriate folder.
4. Preserve my actual algorithm.
5. Compile/check the C++ where practical.
6. Update logs.
7. Update README statistics.
8. Review `git diff`.
9. Create one clean commit for that day's batch.

---

# 5. NEVER FABRICATE DATA

Never invent:

* problem IDs
* URLs
* titles
* ratings
* contest ranks
* rating changes
* solved dates
* acceptance status
* number of problems
* study hours

Only use information I provide or information that is directly verifiable.

If something is missing, leave it unknown rather than guessing.

---

# 6. PRESERVE MY CODE

My code represents my actual learning history.

Do NOT silently replace my solution with a cleaner or faster solution.

You may:

* format it
* normalize whitespace
* fix obvious accidental syntax errors when necessary

But preserve the algorithm I wrote.

If the code appears incorrect:

* tell me
* record the issue if appropriate
* do not silently rewrite it

Distinguish between:

"Compiles"

"Appears logically correct"

and

"Accepted"

Only record "Accepted" when I provide evidence that the platform accepted it.

---

# 7. SOLUTION FILE NAMING

Use deterministic filenames.

Examples:

solutions/codeforces/800/158A_next_round.cpp

solutions/codechef/FLOW001_add_two_numbers.cpp

solutions/leetcode/easy/1_two_sum.cpp

solutions/cses/sorting-searching/apartments.cpp

solutions/project-euler/001_multiples_of_3_or_5.cpp

Avoid spaces in filenames.

Use official problem IDs whenever available.

Do not rename an existing solution unnecessarily.

---

# 8. PROBLEM LOG

Maintain:

logs/problems.csv

Columns:

date
platform
problem_id
title
url
rating
difficulty
topic
subtopic
pattern
result
time_minutes
attempts
contest
upsolved
notes

Possible result values:

Solved Independently
Solved With Hint
Solved After Editorial
Could Not Solve
Accepted

A problem must not be duplicated.

Use platform + problem ID as the primary duplicate check whenever an ID exists.

---

# 9. DAILY LOG

Maintain:

logs/daily.csv

Columns:

date
total_problems
codeforces
codechef
leetcode
cses
project_euler
contests
upsolved
study_hours
notes

Calculate total_problems from the actual unique problems recorded for that date.

Do not count the same problem twice.

LeetCode remains separate as a side quest but is included in the total problem count.

---

# 10. CONTEST LOG

Maintain:

logs/contests.csv

Columns:

date
platform
contest_id
contest_name
rank
rating_before
rating_change
rating_after
problems_attempted
problems_solved
problems_upsolved
notes

Only record rating information I actually provide or that is directly available from trustworthy supplied data.

Never predict my rating.

---

# 11. UPSOLVING

If I say that a problem was not solved during a contest but was solved afterward:

* preserve the original contest relationship
* set upsolved = yes
* do not count it as a second unique problem

If I provide the lesson from upsolving, record it.

If I identify a weak pattern, connect it to the appropriate notes/pattern entry.

---

# 12. TOPICS AND PATTERNS

Problems may belong to multiple patterns.

Examples:

Two Sum
→ Arrays
→ Hashing

Valid Parentheses
→ Strings
→ Stack

A Codeforces problem may involve:

→ Greedy
→ Sorting
→ Prefix Sum

Do not force every problem into exactly one category.

When metadata is obvious, classify it carefully.

When it is uncertain, leave it unspecified rather than inventing a classification.

---

# 13. LEETCODE SIDE QUEST

LeetCode is NOT the main CP track.

Track it normally in the repository.

Keep it separate in README statistics.

Do not treat a huge LeetCode tag list as a required workload.

The purpose is selective DSA reinforcement.

---

# 14. COMPETITIVE PROGRAMMING PRINCIPLE

The main goal is not to maximize the number of solved problems.

The goal is:

PATTERN COVERAGE
+
PROBLEM-SOLVING ABILITY
+
CONTEST EXPERIENCE
+
UPSOLVING
+
REVISION

A daily target of approximately 3 meaningful problems is useful, but never create fake work just to hit the number.

---

# 15. COMMIT POLICY

Prefer one meaningful commit per genuine study day.

Preferred commit format:

CP: YYYY-MM-DD — X problems

Example:

CP: 2026-09-29 — 3 problems

Commit body may include:

* 2 Codeforces
* 1 CodeChef
* Topics: Arrays, Hashing

Do NOT create:

* empty commits
* placeholder commits
* fake streak commits
* meaningless formatting-only commits

A commit must correspond to actual work.

If there is no genuine work, do not create a commit.

---

# 16. README

Maintain README.md as a public-facing summary.

It should contain:

# Competitive Programming Journey

## Current Focus

Current topic/phase when known.

## Statistics

Total problems:
Codeforces:
CodeChef:
LeetCode:
CSES:
Project Euler:

## Problems by Month

Show useful monthly totals.

## Problems by Platform

Show distribution.

## Problems by Topic

Show topic distribution.

## Codeforces

Current rating:
Peak rating:
Contests:
Problems solved:

Only display real values.

## Roadmap

Show broad roadmap progress.

## Recent Activity

Show recent meaningful activity.

Do not clutter README with every single problem if the file becomes unnecessarily large.

---

# 17. NOTES

Use:

notes/patterns/
notes/mistakes/
notes/algorithms/

Examples:

notes/mistakes/
overflow.md
binary-search-boundary.md
misread-constraints.md

notes/patterns/
prefix-sum.md
two-pointers.md
binary-search-on-answer.md
greedy.md

Only create permanent notes when the information is genuinely useful.

---

# 18. C++ TEMPLATE

Keep reusable C++ templates under:

templates/

Examples may include:

* fast I/O
* standard CP template
* BFS
* DFS
* Dijkstra
* DSU
* Fenwick Tree
* Segment Tree
* Sieve
* modular arithmetic

Do not mix personal solved-problem code with generic templates.

---

# 19. VALIDATION

When C++ code is added:

1. Compile it when practical.
2. Report compilation errors.
3. Run available sample tests when practical.
4. Do not claim correctness solely because it compiles.

Do not make arbitrary code changes to force a solution to compile without telling me.

---

# 20. DUPLICATE PROTECTION

Before creating a new solution:

* Search the repository.
* Check logs/problems.csv.
* Check the expected solution path.

If the problem already exists:

* do not create a duplicate
* tell me that it is already recorded

---

# 21. HISTORICAL INTEGRITY

Never rewrite historical dates unless I explicitly ask.

Never retroactively change the recorded number of problems merely to improve statistics.

Never alter past contest records without explicit instruction.

The repository should remain auditable.

---

# 22. DAILY COMMAND

When I say:

"Log today's work"

process all solutions and metadata from the current request that I explicitly identified as today's work.

Do not guess missing problems.

Do not search my filesystem for unrelated code.

---

# 23. DAILY BATCH RESPONSE

After processing a daily batch, report:

Date:
Problems added:
Codeforces:
CodeChef:
LeetCode:
CSES:
Project Euler:
Contests:
Upsolved:

Files added:
Files updated:

Validation:

* compile results
* sample-test results where applicable
* any issues

Commit:
[commit summary]

Keep this report concise.

---

# 24. SAFETY CHECK BEFORE COMMIT

Before committing:

* inspect git status
* inspect the diff
* confirm only intended files changed
* confirm no secrets were added
* confirm no API keys/passwords/tokens/private credentials are present
* confirm no unrelated files are being committed

Never commit secrets.

---

# 25. GITHUB REMOTE

Use the existing configured GitHub remote.

Do not change remotes unless explicitly instructed.

Do not force-push.

Do not rewrite public history.

Do not delete remote branches unless explicitly instructed.

Normal daily workflow should be:

git status
→ inspect
→ add intended files
→ commit
→ push

---

# 26. FINAL PRINCIPLE

This repository should eventually tell the complete story of my development as a competitive programmer:

What I solved
When I solved it
What I struggled with
What I learned
Which patterns I know
Which mistakes I repeat
Which contests I participated in
What I upsolved
How my problem-solving ability developed

Optimize for an honest, useful long-term record.

Do not optimize for superficial GitHub statistics.
