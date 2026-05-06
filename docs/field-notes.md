# Field Notes

`summit-data-ingest-gate` is easiest to review by starting with the fixture, not the prose.

The domain cases cover `schema drift`, `lineage depth`, `partition skew`, and `quality gap`. They sit beside the smaller starter fixture so the project has both a compact scoring check and a domain-flavored review check.

`baseline` tells me the happy path still works. `stress` tells me whether the guardrail still has teeth.

The local verifier covers this data so the notes stay tied to code.
