# summit-data-ingest-gate

`summit-data-ingest-gate` explores data engineering with a small C++ codebase and local fixtures. The technical goal is to build a C++ toolkit that studies ingest behavior through log and snapshot fixtures, with replay consistency checks and no credentials or hosted services.

## Project Rationale

This is intentionally local and self-contained so it can be inspected without credentials, services, or seeded history.

## Summit Data Ingest Gate Review Notes

The first comparison I would make is `schema drift` against `lineage depth` because it shows where the rule is most opinionated.

## Feature Set

- `fixtures/domain_review.csv` adds cases for schema drift and lineage depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/summit-data-ingest-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `schema drift` and `lineage depth`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Architecture

The implementation keeps the scoring rule plain: reward signal and confidence, preserve slack, penalize drag, then classify the result into a review lane.

The C++ implementation avoids hidden state so fixture changes are easy to reason about.

## Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Test Command

That command is also the regression path. It verifies the domain cases and catches mismatches between the CSV, metadata, and code.

## Next Improvements

This remains a local project with deterministic fixtures. It does not depend on credentials, hosted services, or live data. Future work should add richer malformed inputs before widening the public API.
