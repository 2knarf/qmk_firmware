# Matrix Diagram for ALF DC60

Most of these are "best-guess." I was using photos I found on ZFrontier as a
reference and I don't have the PCB on-hand.

\- @noroadsleft, 2023-11-21

```
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐    ┌───────┐
│00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0A │0B │0C │0D │0E │    │0D     │ 2u Backspace
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤    └─┬─────┤
│10   │12 │13 │14 │15 │16 │17 │18 │19 │1A │1B │1C │1D │1E   │      │     │
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤   ┌──┴┐2D  │ ISO Enter
│20    │22 │23 │24 │25 │26 │27 │28 │29 │2A │2B │2C │2D      │   │1E │    │
└──────┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴────────┘   └───┴────┘

------------------------ SHIFT ROWS -------------------------
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
│30 │31 │32 │33 │34 │35 │36 │37 │38 │39 │3A │3B │3C │3D │3E │
└───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
┌───────┐
│30     │ 2u LShift
└───────┘

┌────┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬──────┬───┬───┐
│30  │31 │32 │33 │34 │35 │36 │37 │38 │39 │3A │3B    │3D │3E │
└────┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴──────┴───┴───┘
┌────────┐                                   ┌───┬──────────┐
│30      │ 2.25u LShift                      │3B │3D        │ 1u/2.75u RShift
└────────┘                                   └───┴──────────┘
                                             ┌───┬──────┬───┐
                                             │3B │3D    │3E │ 1u/1.75u/1u RShift
                                             └───┴──────┴───┘

------------------------ BOTTOM ROWS ------------------------
┌────┬────┬────┬──────────┬────┬────────┬───┬───┬───┬───┬───┐
│40  │42  │43  │45        │47  │48      │4A │4B │4C │4D │4E │
└────┴────┴────┴──────────┴────┴────────┴───┴───┴───┴───┴───┘
┌────┬────┬────┬────────────────────────┬────┬────┬────┬────┐
│40  │42  │43  │47                      │4A  │4B  │4D  │4E  │ Standard
└────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
┌─────┬───┬─────┬───────────────────────────┬─────┬───┬─────┐
│40   │42 │43   │47                         │4B   │4D │4E   │ Tsangan/WKL/HHKB
└─────┴───┴─────┴───────────────────────────┴─────┴───┴─────┘
```
