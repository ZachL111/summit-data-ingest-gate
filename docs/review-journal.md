# Review Journal

The review surface for `summit-data-ingest-gate` is deliberately narrow: one fixture, one scoring rule, and one local check.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its data engineering focus without claiming live deployment or external usage.

## Cases

- `baseline`: `schema drift`, score 225, lane `ship`
- `stress`: `lineage depth`, score 146, lane `ship`
- `edge`: `partition skew`, score 169, lane `ship`
- `recovery`: `quality gap`, score 161, lane `ship`
- `stale`: `schema drift`, score 166, lane `ship`

## Note

A future change should add new cases before it changes the scoring rule.
