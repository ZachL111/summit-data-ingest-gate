# Summit Data Ingest Gate Walkthrough

The fixture is intentionally compact, so the review starts with the cases that pull farthest apart.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 225 | ship |
| stress | lineage depth | 146 | ship |
| edge | partition skew | 169 | ship |
| recovery | quality gap | 161 | ship |
| stale | schema drift | 166 | ship |

Start with `baseline` and `stress`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

`baseline` is the optimistic case; use it to make sure the scoring path still rewards strong signal.
