# StrangerThingsCreditUnion

Driver for the STCU Software Development department's Stranger Things light strand

## Light Index

There are 50 lights in the strand. The first light is index 0, the last light is index 49. Below is indexing sequence we used for the light array.

| Letter | Index | Row                                 |
| ------ | ----- | ----------------------------------- |
| A      | 0     | First                               |
| B      | 2     | First                               |
| C      | 4     | First                               |
| D      | 6     | First                               |
| E      | 8     | First                               |
| F      | 10    | First                               |
| G      | 12    | First                               |
| H      | 14    | First                               |
| I      | 16    | Transition between first and second |
| J      | 30    | Second                              |
| K      | 28    | Second                              |
| L      | 26    | Second                              |
| M      | 24    | Second                              |
| N      | 22    | Second                              |
| O      | 20    | Second                              |
| P      | 18    | Second                              |
| Q      | 32    | Transition between second and third |
| R      | 34    | Third                               |
| S      | 36    | Third                               |
| T      | 38    | Third                               |
| U      | 40    | Third                               |
| V      | 42    | Third                               |
| W      | 44    | Third                               |
| X      | 46    | Third                               |
| Y      | 48    | Third                               |
| Z      | 49    | Third                               |

## Loop Sequence

The lights will use the following sequence:

1. Festive sequence
    1. festive loop 1.
    2. festive loop 2.
    3. festive loop 3... etc.
2. Dramatic sequence
    1. 3 second pause.
    2. (Optional) "RIGHT HERE" sequence, with 4 second pause afterwards.
    3. "RUN" sequence.
    4. Yelling sequence (should last for 5 seconds, with 5 seconds of no lights afterwards).

## "Right here" and "Run" timing

Below is the light on and light off timing in seconds.

| Letter | Light on | Light off |
| ------ | -------- | --------- |
| R      | 2.5      | 2.2       |
| I      | 1.75     | 0.5       |
| G      | 1.75     | 1         |
| H      | 1.75     | 1         |
| T      | 1.75     | 1         |
| H      | 1.25     | 0.5       |
| E      | 1.25     | 0.5       |
| R      | 1.25     | 0.5       |
| E      | 1.25     | 0.5       |

| Letter | Light on | Light off |
| ------ | -------- | --------- |
| R      | 1.5      | 1         |
| U      | 1.75     | 1.5       |
| N      | 2.5      | 2         |
