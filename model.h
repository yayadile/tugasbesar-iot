#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class SVM {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        float kernels[1123] = { 0 };
                        float decisions[3] = { 0 };
                        int votes[3] = { 0 };
                        kernels[0] = compute_kernel(x,   24.9  , 52.7  , 93.0  , 75.7  , 37.1 );
                        kernels[1] = compute_kernel(x,   25.3  , 43.0  , 95.0  , 97.3  , 37.5 );
                        kernels[2] = compute_kernel(x,   27.0  , 51.3  , 94.2  , 74.4  , 36.9 );
                        kernels[3] = compute_kernel(x,   24.0  , 46.3  , 93.7  , 75.7  , 37.1 );
                        kernels[4] = compute_kernel(x,   28.6  , 52.8  , 94.1  , 82.3  , 36.9 );
                        kernels[5] = compute_kernel(x,   25.9  , 56.2  , 93.5  , 69.3  , 36.7 );
                        kernels[6] = compute_kernel(x,   26.0  , 67.4  , 95.1  , 83.2  , 36.6 );
                        kernels[7] = compute_kernel(x,   28.8  , 68.4  , 97.5  , 94.5  , 37.0 );
                        kernels[8] = compute_kernel(x,   29.4  , 58.2  , 98.1  , 94.4  , 36.9 );
                        kernels[9] = compute_kernel(x,   24.7  , 62.3  , 94.5  , 82.0  , 36.8 );
                        kernels[10] = compute_kernel(x,   24.7  , 57.5  , 98.6  , 101.1  , 37.1 );
                        kernels[11] = compute_kernel(x,   27.1  , 59.9  , 95.6  , 93.9  , 37.0 );
                        kernels[12] = compute_kernel(x,   29.8  , 52.3  , 97.9  , 96.1  , 36.8 );
                        kernels[13] = compute_kernel(x,   29.8  , 55.1  , 94.2  , 87.1  , 37.2 );
                        kernels[14] = compute_kernel(x,   28.6  , 69.0  , 97.1  , 91.8  , 36.5 );
                        kernels[15] = compute_kernel(x,   26.2  , 65.9  , 94.3  , 70.1  , 37.2 );
                        kernels[16] = compute_kernel(x,   27.2  , 56.5  , 96.7  , 91.1  , 37.2 );
                        kernels[17] = compute_kernel(x,   28.1  , 45.8  , 95.7  , 86.8  , 36.5 );
                        kernels[18] = compute_kernel(x,   27.2  , 45.4  , 94.5  , 73.0  , 37.0 );
                        kernels[19] = compute_kernel(x,   29.4  , 45.5  , 96.6  , 88.6  , 37.4 );
                        kernels[20] = compute_kernel(x,   29.4  , 58.2  , 96.3  , 91.5  , 36.9 );
                        kernels[21] = compute_kernel(x,   25.3  , 51.7  , 95.5  , 95.9  , 36.7 );
                        kernels[22] = compute_kernel(x,   26.2  , 68.8  , 98.6  , 105.1  , 36.9 );
                        kernels[23] = compute_kernel(x,   29.8  , 48.5  , 97.6  , 100.2  , 36.9 );
                        kernels[24] = compute_kernel(x,   28.8  , 41.6  , 97.2  , 93.0  , 37.3 );
                        kernels[25] = compute_kernel(x,   24.1  , 49.5  , 93.4  , 66.0  , 37.0 );
                        kernels[26] = compute_kernel(x,   26.2  , 56.3  , 95.7  , 93.7  , 36.7 );
                        kernels[27] = compute_kernel(x,   29.2  , 58.3  , 94.1  , 80.1  , 37.1 );
                        kernels[28] = compute_kernel(x,   27.5  , 64.3  , 95.4  , 87.3  , 36.8 );
                        kernels[29] = compute_kernel(x,   26.8  , 46.7  , 94.7  , 101.4  , 37.0 );
                        kernels[30] = compute_kernel(x,   24.5  , 57.5  , 94.0  , 59.6  , 36.7 );
                        kernels[31] = compute_kernel(x,   28.4  , 51.8  , 91.8  , 60.0  , 36.6 );
                        kernels[32] = compute_kernel(x,   26.5  , 60.6  , 93.9  , 74.1  , 36.9 );
                        kernels[33] = compute_kernel(x,   24.7  , 47.2  , 98.0  , 99.2  , 36.6 );
                        kernels[34] = compute_kernel(x,   29.1  , 58.2  , 94.2  , 70.3  , 37.2 );
                        kernels[35] = compute_kernel(x,   27.8  , 53.8  , 93.8  , 87.3  , 37.3 );
                        kernels[36] = compute_kernel(x,   26.6  , 62.6  , 94.9  , 88.9  , 37.2 );
                        kernels[37] = compute_kernel(x,   24.6  , 54.2  , 94.4  , 85.6  , 37.2 );
                        kernels[38] = compute_kernel(x,   24.5  , 64.8  , 93.7  , 70.5  , 36.9 );
                        kernels[39] = compute_kernel(x,   28.7  , 58.8  , 93.9  , 76.3  , 37.4 );
                        kernels[40] = compute_kernel(x,   27.0  , 44.1  , 95.6  , 87.7  , 37.1 );
                        kernels[41] = compute_kernel(x,   29.8  , 48.4  , 94.0  , 71.9  , 37.0 );
                        kernels[42] = compute_kernel(x,   25.7  , 52.8  , 96.1  , 92.3  , 37.4 );
                        kernels[43] = compute_kernel(x,   27.5  , 49.3  , 95.5  , 93.9  , 37.3 );
                        kernels[44] = compute_kernel(x,   28.2  , 50.8  , 97.1  , 106.9  , 37.3 );
                        kernels[45] = compute_kernel(x,   27.3  , 50.3  , 96.1  , 89.9  , 37.0 );
                        kernels[46] = compute_kernel(x,   29.7  , 42.7  , 96.8  , 94.2  , 36.6 );
                        kernels[47] = compute_kernel(x,   24.8  , 45.6  , 92.1  , 79.7  , 37.0 );
                        kernels[48] = compute_kernel(x,   26.1  , 41.5  , 95.4  , 87.4  , 36.4 );
                        kernels[49] = compute_kernel(x,   29.3  , 58.8  , 94.1  , 72.5  , 37.7 );
                        kernels[50] = compute_kernel(x,   26.4  , 57.4  , 96.7  , 98.1  , 36.8 );
                        kernels[51] = compute_kernel(x,   28.8  , 48.0  , 96.2  , 99.3  , 36.9 );
                        kernels[52] = compute_kernel(x,   25.7  , 69.0  , 96.1  , 90.9  , 37.2 );
                        kernels[53] = compute_kernel(x,   25.5  , 44.2  , 98.8  , 97.9  , 37.1 );
                        kernels[54] = compute_kernel(x,   29.3  , 53.7  , 93.7  , 70.1  , 37.2 );
                        kernels[55] = compute_kernel(x,   27.0  , 69.7  , 94.2  , 82.5  , 37.4 );
                        kernels[56] = compute_kernel(x,   24.8  , 60.6  , 95.0  , 95.0  , 37.1 );
                        kernels[57] = compute_kernel(x,   26.1  , 67.3  , 95.7  , 99.3  , 36.9 );
                        kernels[58] = compute_kernel(x,   28.0  , 44.4  , 94.8  , 91.0  , 36.7 );
                        kernels[59] = compute_kernel(x,   24.4  , 68.9  , 93.4  , 83.6  , 37.0 );
                        kernels[60] = compute_kernel(x,   28.4  , 57.4  , 93.8  , 77.1  , 37.6 );
                        kernels[61] = compute_kernel(x,   26.8  , 63.9  , 93.6  , 82.5  , 36.9 );
                        kernels[62] = compute_kernel(x,   26.4  , 47.0  , 95.8  , 90.0  , 37.0 );
                        kernels[63] = compute_kernel(x,   24.9  , 54.4  , 96.7  , 95.4  , 36.9 );
                        kernels[64] = compute_kernel(x,   29.9  , 43.0  , 95.2  , 82.4  , 36.7 );
                        kernels[65] = compute_kernel(x,   26.1  , 43.3  , 94.2  , 76.8  , 36.8 );
                        kernels[66] = compute_kernel(x,   25.3  , 50.2  , 94.9  , 89.5  , 36.7 );
                        kernels[67] = compute_kernel(x,   26.4  , 63.1  , 96.6  , 92.1  , 37.0 );
                        kernels[68] = compute_kernel(x,   28.0  , 46.0  , 94.5  , 85.0  , 36.7 );
                        kernels[69] = compute_kernel(x,   25.4  , 48.7  , 96.2  , 98.2  , 37.4 );
                        kernels[70] = compute_kernel(x,   24.1  , 53.8  , 96.0  , 93.9  , 36.8 );
                        kernels[71] = compute_kernel(x,   26.6  , 47.6  , 95.5  , 92.5  , 37.1 );
                        kernels[72] = compute_kernel(x,   29.2  , 53.6  , 93.3  , 88.6  , 37.1 );
                        kernels[73] = compute_kernel(x,   25.5  , 43.0  , 93.8  , 78.7  , 37.0 );
                        kernels[74] = compute_kernel(x,   24.1  , 58.7  , 96.8  , 92.1  , 36.6 );
                        kernels[75] = compute_kernel(x,   25.6  , 59.2  , 93.5  , 70.5  , 36.9 );
                        kernels[76] = compute_kernel(x,   26.3  , 54.7  , 96.4  , 91.2  , 36.8 );
                        kernels[77] = compute_kernel(x,   25.7  , 65.4  , 96.0  , 94.8  , 36.9 );
                        kernels[78] = compute_kernel(x,   29.5  , 52.6  , 94.5  , 77.3  , 37.1 );
                        kernels[79] = compute_kernel(x,   29.2  , 41.6  , 94.7  , 97.1  , 37.3 );
                        kernels[80] = compute_kernel(x,   26.8  , 60.2  , 94.9  , 92.4  , 37.4 );
                        kernels[81] = compute_kernel(x,   27.8  , 68.0  , 99.8  , 102.6  , 36.7 );
                        kernels[82] = compute_kernel(x,   27.2  , 45.0  , 94.4  , 83.5  , 36.9 );
                        kernels[83] = compute_kernel(x,   26.6  , 44.3  , 95.6  , 90.7  , 37.3 );
                        kernels[84] = compute_kernel(x,   28.1  , 58.8  , 94.7  , 82.7  , 37.1 );
                        kernels[85] = compute_kernel(x,   25.3  , 68.4  , 94.9  , 86.4  , 36.7 );
                        kernels[86] = compute_kernel(x,   25.6  , 66.0  , 98.3  , 109.1  , 36.6 );
                        kernels[87] = compute_kernel(x,   29.2  , 50.1  , 95.6  , 85.4  , 36.4 );
                        kernels[88] = compute_kernel(x,   27.0  , 65.5  , 94.4  , 64.5  , 37.0 );
                        kernels[89] = compute_kernel(x,   24.0  , 44.7  , 92.8  , 72.6  , 37.0 );
                        kernels[90] = compute_kernel(x,   29.9  , 55.0  , 95.1  , 94.5  , 37.0 );
                        kernels[91] = compute_kernel(x,   27.8  , 47.7  , 95.9  , 93.6  , 36.6 );
                        kernels[92] = compute_kernel(x,   24.2  , 59.4  , 99.0  , 97.2  , 37.0 );
                        kernels[93] = compute_kernel(x,   24.7  , 48.2  , 93.1  , 85.2  , 37.1 );
                        kernels[94] = compute_kernel(x,   26.9  , 54.0  , 99.0  , 94.7  , 36.4 );
                        kernels[95] = compute_kernel(x,   28.1  , 62.3  , 95.1  , 92.5  , 37.4 );
                        kernels[96] = compute_kernel(x,   28.3  , 60.5  , 97.6  , 93.5  , 37.0 );
                        kernels[97] = compute_kernel(x,   29.4  , 66.7  , 94.8  , 86.1  , 37.3 );
                        kernels[98] = compute_kernel(x,   27.3  , 49.9  , 96.1  , 91.8  , 36.9 );
                        kernels[99] = compute_kernel(x,   27.9  , 68.2  , 95.2  , 90.4  , 37.3 );
                        kernels[100] = compute_kernel(x,   28.3  , 44.7  , 96.7  , 101.3  , 37.0 );
                        kernels[101] = compute_kernel(x,   25.3  , 45.7  , 94.4  , 85.2  , 36.8 );
                        kernels[102] = compute_kernel(x,   29.5  , 60.6  , 96.0  , 89.6  , 37.3 );
                        kernels[103] = compute_kernel(x,   29.8  , 58.7  , 95.5  , 88.1  , 36.8 );
                        kernels[104] = compute_kernel(x,   29.0  , 61.4  , 94.0  , 57.0  , 36.9 );
                        kernels[105] = compute_kernel(x,   29.2  , 53.8  , 94.2  , 72.9  , 37.1 );
                        kernels[106] = compute_kernel(x,   24.2  , 44.3  , 92.7  , 80.3  , 36.5 );
                        kernels[107] = compute_kernel(x,   28.0  , 52.6  , 96.3  , 92.0  , 36.9 );
                        kernels[108] = compute_kernel(x,   28.8  , 42.4  , 95.1  , 89.9  , 36.3 );
                        kernels[109] = compute_kernel(x,   26.3  , 62.2  , 93.9  , 98.0  , 37.0 );
                        kernels[110] = compute_kernel(x,   27.6  , 51.0  , 96.9  , 93.9  , 37.1 );
                        kernels[111] = compute_kernel(x,   25.9  , 64.6  , 94.2  , 92.9  , 37.2 );
                        kernels[112] = compute_kernel(x,   28.3  , 59.2  , 95.7  , 91.9  , 36.7 );
                        kernels[113] = compute_kernel(x,   26.9  , 53.5  , 93.9  , 83.0  , 36.8 );
                        kernels[114] = compute_kernel(x,   27.8  , 66.8  , 96.3  , 90.1  , 36.6 );
                        kernels[115] = compute_kernel(x,   25.3  , 44.6  , 96.3  , 89.1  , 37.1 );
                        kernels[116] = compute_kernel(x,   27.6  , 59.0  , 95.8  , 94.4  , 37.2 );
                        kernels[117] = compute_kernel(x,   24.8  , 51.2  , 93.6  , 80.8  , 36.6 );
                        kernels[118] = compute_kernel(x,   24.6  , 50.6  , 94.2  , 98.5  , 37.2 );
                        kernels[119] = compute_kernel(x,   26.1  , 50.7  , 94.2  , 68.5  , 36.9 );
                        kernels[120] = compute_kernel(x,   27.2  , 67.9  , 99.0  , 99.3  , 37.0 );
                        kernels[121] = compute_kernel(x,   30.0  , 43.0  , 95.9  , 88.1  , 37.5 );
                        kernels[122] = compute_kernel(x,   27.2  , 42.3  , 93.9  , 70.7  , 37.4 );
                        kernels[123] = compute_kernel(x,   27.7  , 40.1  , 94.6  , 85.4  , 37.4 );
                        kernels[124] = compute_kernel(x,   25.8  , 69.8  , 94.3  , 92.1  , 37.2 );
                        kernels[125] = compute_kernel(x,   29.5  , 65.1  , 96.3  , 91.9  , 36.9 );
                        kernels[126] = compute_kernel(x,   24.5  , 43.4  , 94.7  , 83.3  , 37.0 );
                        kernels[127] = compute_kernel(x,   28.2  , 44.9  , 95.7  , 85.9  , 36.6 );
                        kernels[128] = compute_kernel(x,   24.2  , 64.8  , 94.5  , 87.0  , 36.8 );
                        kernels[129] = compute_kernel(x,   26.8  , 52.8  , 93.0  , 80.2  , 37.2 );
                        kernels[130] = compute_kernel(x,   30.0  , 49.5  , 94.9  , 89.9  , 37.0 );
                        kernels[131] = compute_kernel(x,   29.9  , 40.4  , 95.4  , 97.4  , 36.8 );
                        kernels[132] = compute_kernel(x,   24.9  , 54.3  , 95.3  , 95.5  , 37.3 );
                        kernels[133] = compute_kernel(x,   26.6  , 46.4  , 96.2  , 98.4  , 37.2 );
                        kernels[134] = compute_kernel(x,   26.9  , 69.0  , 93.0  , 81.4  , 37.4 );
                        kernels[135] = compute_kernel(x,   25.3  , 45.8  , 94.0  , 79.5  , 37.4 );
                        kernels[136] = compute_kernel(x,   24.9  , 67.3  , 93.8  , 66.4  , 37.0 );
                        kernels[137] = compute_kernel(x,   29.0  , 50.2  , 92.2  , 74.2  , 37.3 );
                        kernels[138] = compute_kernel(x,   26.1  , 64.2  , 96.0  , 98.1  , 37.0 );
                        kernels[139] = compute_kernel(x,   25.5  , 40.6  , 96.4  , 94.0  , 37.3 );
                        kernels[140] = compute_kernel(x,   28.4  , 59.3  , 96.6  , 91.2  , 37.1 );
                        kernels[141] = compute_kernel(x,   27.3  , 44.7  , 92.3  , 67.2  , 37.2 );
                        kernels[142] = compute_kernel(x,   27.3  , 67.9  , 97.1  , 96.9  , 37.0 );
                        kernels[143] = compute_kernel(x,   25.2  , 58.6  , 93.2  , 82.5  , 36.8 );
                        kernels[144] = compute_kernel(x,   27.5  , 58.1  , 93.5  , 76.3  , 36.9 );
                        kernels[145] = compute_kernel(x,   27.0  , 57.6  , 97.1  , 95.8  , 36.4 );
                        kernels[146] = compute_kernel(x,   28.7  , 56.1  , 98.0  , 96.6  , 37.0 );
                        kernels[147] = compute_kernel(x,   30.0  , 46.2  , 96.8  , 90.3  , 36.7 );
                        kernels[148] = compute_kernel(x,   26.5  , 55.8  , 95.5  , 98.8  , 36.9 );
                        kernels[149] = compute_kernel(x,   25.6  , 41.0  , 92.9  , 78.8  , 36.9 );
                        kernels[150] = compute_kernel(x,   25.0  , 40.6  , 94.6  , 92.0  , 36.9 );
                        kernels[151] = compute_kernel(x,   27.7  , 59.6  , 92.8  , 79.2  , 36.9 );
                        kernels[152] = compute_kernel(x,   28.5  , 49.3  , 96.3  , 91.6  , 36.9 );
                        kernels[153] = compute_kernel(x,   24.4  , 67.7  , 93.7  , 79.6  , 36.9 );
                        kernels[154] = compute_kernel(x,   25.5  , 57.8  , 94.1  , 71.5  , 37.2 );
                        kernels[155] = compute_kernel(x,   26.7  , 40.3  , 93.5  , 73.8  , 37.2 );
                        kernels[156] = compute_kernel(x,   28.0  , 45.7  , 97.0  , 92.7  , 36.8 );
                        kernels[157] = compute_kernel(x,   28.4  , 67.2  , 95.6  , 95.1  , 36.8 );
                        kernels[158] = compute_kernel(x,   24.7  , 48.5  , 96.5  , 91.5  , 37.0 );
                        kernels[159] = compute_kernel(x,   27.3  , 63.2  , 97.5  , 101.4  , 36.6 );
                        kernels[160] = compute_kernel(x,   29.7  , 46.6  , 92.7  , 69.2  , 36.8 );
                        kernels[161] = compute_kernel(x,   28.6  , 62.5  , 95.0  , 83.7  , 37.0 );
                        kernels[162] = compute_kernel(x,   29.5  , 63.1  , 92.6  , 58.7  , 36.5 );
                        kernels[163] = compute_kernel(x,   27.2  , 46.3  , 94.8  , 84.4  , 37.2 );
                        kernels[164] = compute_kernel(x,   25.0  , 47.3  , 93.7  , 68.6  , 36.9 );
                        kernels[165] = compute_kernel(x,   25.1  , 41.4  , 95.7  , 88.0  , 37.3 );
                        kernels[166] = compute_kernel(x,   24.6  , 44.9  , 96.0  , 92.8  , 37.2 );
                        kernels[167] = compute_kernel(x,   26.1  , 67.4  , 93.8  , 83.2  , 37.1 );
                        kernels[168] = compute_kernel(x,   29.0  , 41.3  , 96.4  , 88.0  , 37.3 );
                        kernels[169] = compute_kernel(x,   28.1  , 64.2  , 96.0  , 93.1  , 37.0 );
                        kernels[170] = compute_kernel(x,   27.9  , 68.9  , 93.2  , 77.6  , 37.3 );
                        kernels[171] = compute_kernel(x,   26.8  , 61.7  , 92.7  , 80.5  , 37.2 );
                        kernels[172] = compute_kernel(x,   29.2  , 42.3  , 94.9  , 81.4  , 37.1 );
                        kernels[173] = compute_kernel(x,   27.4  , 68.2  , 95.2  , 92.4  , 37.2 );
                        kernels[174] = compute_kernel(x,   28.6  , 45.1  , 93.8  , 60.7  , 37.4 );
                        kernels[175] = compute_kernel(x,   29.4  , 69.5  , 93.2  , 75.4  , 37.3 );
                        kernels[176] = compute_kernel(x,   27.9  , 57.4  , 95.0  , 84.5  , 37.0 );
                        kernels[177] = compute_kernel(x,   27.8  , 43.0  , 96.6  , 101.1  , 37.3 );
                        kernels[178] = compute_kernel(x,   25.5  , 43.6  , 95.3  , 81.8  , 36.8 );
                        kernels[179] = compute_kernel(x,   26.2  , 42.4  , 95.9  , 96.4  , 37.2 );
                        kernels[180] = compute_kernel(x,   25.3  , 59.5  , 93.9  , 76.8  , 37.2 );
                        kernels[181] = compute_kernel(x,   26.0  , 56.1  , 94.1  , 80.3  , 37.1 );
                        kernels[182] = compute_kernel(x,   24.0  , 60.7  , 95.6  , 99.5  , 37.0 );
                        kernels[183] = compute_kernel(x,   28.1  , 49.3  , 92.7  , 63.3  , 36.9 );
                        kernels[184] = compute_kernel(x,   26.1  , 46.8  , 98.1  , 94.6  , 37.0 );
                        kernels[185] = compute_kernel(x,   27.5  , 46.8  , 96.5  , 91.1  , 37.0 );
                        kernels[186] = compute_kernel(x,   28.0  , 58.4  , 94.8  , 98.6  , 36.8 );
                        kernels[187] = compute_kernel(x,   26.6  , 40.4  , 98.4  , 97.7  , 36.9 );
                        kernels[188] = compute_kernel(x,   29.3  , 58.0  , 94.6  , 80.0  , 37.0 );
                        kernels[189] = compute_kernel(x,   27.8  , 57.1  , 94.4  , 74.0  , 36.8 );
                        kernels[190] = compute_kernel(x,   26.5  , 42.2  , 97.3  , 91.7  , 36.6 );
                        kernels[191] = compute_kernel(x,   26.9  , 52.4  , 93.6  , 65.3  , 36.9 );
                        kernels[192] = compute_kernel(x,   29.8  , 67.9  , 94.3  , 72.7  , 37.0 );
                        kernels[193] = compute_kernel(x,   24.7  , 51.1  , 96.1  , 96.4  , 37.1 );
                        kernels[194] = compute_kernel(x,   26.3  , 42.5  , 94.3  , 83.8  , 37.0 );
                        kernels[195] = compute_kernel(x,   26.6  , 52.1  , 93.9  , 82.0  , 36.9 );
                        kernels[196] = compute_kernel(x,   29.2  , 41.1  , 97.2  , 91.0  , 37.0 );
                        kernels[197] = compute_kernel(x,   27.5  , 40.0  , 97.9  , 92.5  , 36.8 );
                        kernels[198] = compute_kernel(x,   29.1  , 60.0  , 96.2  , 92.9  , 37.2 );
                        kernels[199] = compute_kernel(x,   28.2  , 47.4  , 94.4  , 93.5  , 36.4 );
                        kernels[200] = compute_kernel(x,   25.3  , 65.8  , 94.2  , 79.1  , 37.2 );
                        kernels[201] = compute_kernel(x,   29.0  , 62.5  , 92.8  , 79.9  , 37.0 );
                        kernels[202] = compute_kernel(x,   29.1  , 49.8  , 94.9  , 96.7  , 36.9 );
                        kernels[203] = compute_kernel(x,   27.7  , 58.7  , 96.1  , 97.1  , 36.4 );
                        kernels[204] = compute_kernel(x,   29.6  , 55.0  , 93.4  , 74.3  , 36.4 );
                        kernels[205] = compute_kernel(x,   26.7  , 68.9  , 95.4  , 96.3  , 37.0 );
                        kernels[206] = compute_kernel(x,   28.1  , 55.9  , 93.7  , 63.9  , 36.9 );
                        kernels[207] = compute_kernel(x,   27.3  , 62.4  , 98.6  , 99.1  , 37.0 );
                        kernels[208] = compute_kernel(x,   28.7  , 65.1  , 96.2  , 96.2  , 36.7 );
                        kernels[209] = compute_kernel(x,   24.8  , 57.8  , 94.4  , 84.6  , 37.1 );
                        kernels[210] = compute_kernel(x,   25.5  , 56.6  , 94.9  , 85.3  , 36.8 );
                        kernels[211] = compute_kernel(x,   29.1  , 47.1  , 96.5  , 90.7  , 37.0 );
                        kernels[212] = compute_kernel(x,   29.7  , 58.1  , 92.6  , 80.9  , 36.9 );
                        kernels[213] = compute_kernel(x,   28.1  , 66.5  , 95.1  , 94.2  , 37.5 );
                        kernels[214] = compute_kernel(x,   25.8  , 45.9  , 93.8  , 65.4  , 36.8 );
                        kernels[215] = compute_kernel(x,   29.1  , 43.1  , 94.8  , 84.7  , 36.5 );
                        kernels[216] = compute_kernel(x,   26.1  , 54.8  , 95.5  , 91.6  , 37.0 );
                        kernels[217] = compute_kernel(x,   27.3  , 50.7  , 96.4  , 88.1  , 36.9 );
                        kernels[218] = compute_kernel(x,   26.7  , 68.2  , 99.6  , 98.6  , 36.5 );
                        kernels[219] = compute_kernel(x,   29.9  , 59.6  , 93.8  , 79.2  , 37.3 );
                        kernels[220] = compute_kernel(x,   29.7  , 56.5  , 95.2  , 90.8  , 37.1 );
                        kernels[221] = compute_kernel(x,   27.7  , 55.1  , 95.2  , 84.0  , 36.9 );
                        kernels[222] = compute_kernel(x,   25.0  , 63.9  , 95.5  , 94.9  , 36.9 );
                        kernels[223] = compute_kernel(x,   26.1  , 41.5  , 94.4  , 88.4  , 37.0 );
                        kernels[224] = compute_kernel(x,   25.4  , 47.3  , 93.6  , 69.5  , 37.3 );
                        kernels[225] = compute_kernel(x,   26.4  , 47.9  , 96.5  , 99.6  , 37.0 );
                        kernels[226] = compute_kernel(x,   26.1  , 54.3  , 96.3  , 89.0  , 36.8 );
                        kernels[227] = compute_kernel(x,   27.4  , 67.0  , 94.1  , 83.3  , 37.0 );
                        kernels[228] = compute_kernel(x,   28.6  , 49.4  , 94.2  , 79.8  , 36.8 );
                        kernels[229] = compute_kernel(x,   26.1  , 54.1  , 94.2  , 82.6  , 36.6 );
                        kernels[230] = compute_kernel(x,   29.4  , 57.9  , 96.0  , 88.9  , 37.0 );
                        kernels[231] = compute_kernel(x,   26.0  , 53.2  , 94.1  , 82.8  , 37.1 );
                        kernels[232] = compute_kernel(x,   29.3  , 65.2  , 96.0  , 93.4  , 37.3 );
                        kernels[233] = compute_kernel(x,   26.5  , 53.7  , 94.6  , 64.3  , 36.7 );
                        kernels[234] = compute_kernel(x,   28.3  , 63.2  , 94.0  , 92.3  , 36.9 );
                        kernels[235] = compute_kernel(x,   27.5  , 46.9  , 98.2  , 94.1  , 37.1 );
                        kernels[236] = compute_kernel(x,   28.6  , 50.4  , 95.2  , 89.0  , 36.7 );
                        kernels[237] = compute_kernel(x,   29.9  , 47.0  , 93.1  , 65.5  , 37.6 );
                        kernels[238] = compute_kernel(x,   27.4  , 47.7  , 96.6  , 97.5  , 36.8 );
                        kernels[239] = compute_kernel(x,   26.3  , 53.5  , 95.8  , 92.0  , 37.2 );
                        kernels[240] = compute_kernel(x,   29.0  , 53.1  , 96.1  , 96.5  , 37.0 );
                        kernels[241] = compute_kernel(x,   29.8  , 60.6  , 94.2  , 85.9  , 37.3 );
                        kernels[242] = compute_kernel(x,   24.3  , 49.4  , 96.5  , 96.4  , 36.8 );
                        kernels[243] = compute_kernel(x,   26.4  , 61.9  , 96.2  , 93.3  , 37.3 );
                        kernels[244] = compute_kernel(x,   28.0  , 51.7  , 94.5  , 74.0  , 37.1 );
                        kernels[245] = compute_kernel(x,   27.7  , 62.3  , 92.8  , 54.8  , 37.4 );
                        kernels[246] = compute_kernel(x,   25.7  , 52.2  , 94.8  , 90.1  , 37.5 );
                        kernels[247] = compute_kernel(x,   28.5  , 43.8  , 96.7  , 90.9  , 36.5 );
                        kernels[248] = compute_kernel(x,   28.2  , 48.6  , 93.8  , 80.5  , 37.5 );
                        kernels[249] = compute_kernel(x,   24.5  , 43.1  , 93.9  , 75.8  , 36.8 );
                        kernels[250] = compute_kernel(x,   27.5  , 42.1  , 96.4  , 93.4  , 36.8 );
                        kernels[251] = compute_kernel(x,   25.6  , 57.3  , 95.3  , 91.7  , 36.7 );
                        kernels[252] = compute_kernel(x,   27.3  , 43.8  , 93.8  , 64.9  , 36.8 );
                        kernels[253] = compute_kernel(x,   26.2  , 44.6  , 95.2  , 93.0  , 37.1 );
                        kernels[254] = compute_kernel(x,   27.8  , 50.0  , 95.8  , 88.4  , 37.0 );
                        kernels[255] = compute_kernel(x,   28.9  , 40.3  , 98.6  , 94.5  , 36.8 );
                        kernels[256] = compute_kernel(x,   29.6  , 42.6  , 97.3  , 97.6  , 36.2 );
                        kernels[257] = compute_kernel(x,   25.9  , 55.3  , 94.7  , 80.0  , 36.2 );
                        kernels[258] = compute_kernel(x,   27.2  , 40.8  , 94.7  , 87.5  , 37.5 );
                        kernels[259] = compute_kernel(x,   29.2  , 63.6  , 94.2  , 89.9  , 37.4 );
                        kernels[260] = compute_kernel(x,   27.7  , 46.4  , 94.9  , 84.9  , 36.7 );
                        kernels[261] = compute_kernel(x,   28.3  , 40.9  , 93.0  , 58.2  , 37.1 );
                        kernels[262] = compute_kernel(x,   29.3  , 54.8  , 93.8  , 61.0  , 36.9 );
                        kernels[263] = compute_kernel(x,   28.2  , 54.6  , 96.4  , 95.1  , 37.1 );
                        kernels[264] = compute_kernel(x,   25.2  , 41.5  , 94.5  , 85.6  , 37.3 );
                        kernels[265] = compute_kernel(x,   27.2  , 63.7  , 93.8  , 78.4  , 36.9 );
                        kernels[266] = compute_kernel(x,   26.3  , 55.4  , 98.6  , 110.9  , 37.2 );
                        kernels[267] = compute_kernel(x,   29.4  , 59.9  , 94.7  , 86.1  , 36.7 );
                        kernels[268] = compute_kernel(x,   26.3  , 68.8  , 97.6  , 93.6  , 37.0 );
                        kernels[269] = compute_kernel(x,   28.3  , 53.6  , 93.3  , 88.3  , 36.7 );
                        kernels[270] = compute_kernel(x,   28.0  , 40.3  , 93.8  , 67.6  , 36.8 );
                        kernels[271] = compute_kernel(x,   27.7  , 43.9  , 97.9  , 102.1  , 38.0 );
                        kernels[272] = compute_kernel(x,   28.3  , 52.4  , 95.0  , 102.4  , 36.8 );
                        kernels[273] = compute_kernel(x,   25.6  , 48.1  , 96.4  , 96.3  , 37.1 );
                        kernels[274] = compute_kernel(x,   29.4  , 57.0  , 95.5  , 90.1  , 37.0 );
                        kernels[275] = compute_kernel(x,   29.6  , 68.7  , 94.1  , 75.3  , 37.4 );
                        kernels[276] = compute_kernel(x,   25.9  , 68.9  , 96.8  , 96.8  , 37.4 );
                        kernels[277] = compute_kernel(x,   25.1  , 48.5  , 93.6  , 74.1  , 36.5 );
                        kernels[278] = compute_kernel(x,   26.2  , 66.2  , 95.3  , 89.9  , 36.7 );
                        kernels[279] = compute_kernel(x,   24.4  , 45.6  , 93.6  , 66.1  , 36.4 );
                        kernels[280] = compute_kernel(x,   30.0  , 69.8  , 95.3  , 87.0  , 36.8 );
                        kernels[281] = compute_kernel(x,   29.6  , 63.6  , 95.8  , 98.1  , 36.6 );
                        kernels[282] = compute_kernel(x,   27.6  , 64.1  , 96.7  , 95.6  , 37.0 );
                        kernels[283] = compute_kernel(x,   24.3  , 59.8  , 95.1  , 95.3  , 37.4 );
                        kernels[284] = compute_kernel(x,   26.4  , 48.1  , 97.0  , 93.6  , 36.9 );
                        kernels[285] = compute_kernel(x,   25.7  , 60.3  , 93.9  , 89.5  , 36.8 );
                        kernels[286] = compute_kernel(x,   26.1  , 48.1  , 97.3  , 92.2  , 36.6 );
                        kernels[287] = compute_kernel(x,   24.5  , 53.9  , 94.1  , 67.6  , 36.5 );
                        kernels[288] = compute_kernel(x,   26.0  , 53.5  , 95.7  , 87.2  , 37.1 );
                        kernels[289] = compute_kernel(x,   29.1  , 59.2  , 95.9  , 90.4  , 36.7 );
                        kernels[290] = compute_kernel(x,   29.6  , 66.3  , 96.1  , 88.5  , 36.7 );
                        kernels[291] = compute_kernel(x,   24.8  , 60.6  , 96.2  , 93.3  , 36.7 );
                        kernels[292] = compute_kernel(x,   25.3  , 48.7  , 96.9  , 99.9  , 37.0 );
                        kernels[293] = compute_kernel(x,   25.8  , 48.3  , 97.8  , 94.8  , 37.3 );
                        kernels[294] = compute_kernel(x,   28.4  , 66.4  , 94.2  , 84.2  , 36.6 );
                        kernels[295] = compute_kernel(x,   28.4  , 54.9  , 95.8  , 87.5  , 36.9 );
                        kernels[296] = compute_kernel(x,   27.0  , 46.4  , 94.1  , 73.1  , 37.4 );
                        kernels[297] = compute_kernel(x,   26.0  , 44.3  , 95.6  , 87.6  , 36.9 );
                        kernels[298] = compute_kernel(x,   25.1  , 57.6  , 93.5  , 88.0  , 37.1 );
                        kernels[299] = compute_kernel(x,   25.4  , 52.8  , 95.0  , 94.1  , 36.7 );
                        kernels[300] = compute_kernel(x,   26.2  , 47.9  , 97.0  , 100.3  , 36.7 );
                        kernels[301] = compute_kernel(x,   28.0  , 66.7  , 94.6  , 81.8  , 37.0 );
                        kernels[302] = compute_kernel(x,   24.0  , 49.4  , 94.1  , 80.9  , 37.1 );
                        kernels[303] = compute_kernel(x,   24.9  , 57.7  , 95.0  , 88.0  , 36.6 );
                        kernels[304] = compute_kernel(x,   26.9  , 58.0  , 92.7  , 69.1  , 37.4 );
                        kernels[305] = compute_kernel(x,   24.2  , 43.7  , 93.9  , 80.9  , 37.3 );
                        kernels[306] = compute_kernel(x,   24.3  , 64.1  , 93.3  , 67.3  , 37.0 );
                        kernels[307] = compute_kernel(x,   28.3  , 63.8  , 91.3  , 71.2  , 36.5 );
                        kernels[308] = compute_kernel(x,   26.4  , 52.3  , 93.9  , 74.0  , 37.4 );
                        kernels[309] = compute_kernel(x,   28.5  , 68.4  , 94.3  , 109.5  , 36.6 );
                        kernels[310] = compute_kernel(x,   24.8  , 43.8  , 96.5  , 90.6  , 36.8 );
                        kernels[311] = compute_kernel(x,   29.6  , 44.3  , 93.8  , 64.0  , 37.2 );
                        kernels[312] = compute_kernel(x,   28.4  , 62.9  , 97.2  , 91.6  , 36.5 );
                        kernels[313] = compute_kernel(x,   24.0  , 67.6  , 95.1  , 86.7  , 36.9 );
                        kernels[314] = compute_kernel(x,   25.3  , 41.5  , 94.2  , 73.5  , 37.1 );
                        kernels[315] = compute_kernel(x,   29.0  , 60.7  , 97.8  , 94.8  , 36.7 );
                        kernels[316] = compute_kernel(x,   26.4  , 67.7  , 93.2  , 72.1  , 37.0 );
                        kernels[317] = compute_kernel(x,   28.0  , 43.0  , 94.1  , 80.2  , 37.2 );
                        kernels[318] = compute_kernel(x,   29.8  , 68.3  , 96.8  , 99.6  , 37.3 );
                        kernels[319] = compute_kernel(x,   28.1  , 55.6  , 97.6  , 95.9  , 36.9 );
                        kernels[320] = compute_kernel(x,   25.1  , 59.8  , 92.6  , 78.2  , 37.0 );
                        kernels[321] = compute_kernel(x,   24.9  , 57.8  , 96.9  , 90.3  , 36.6 );
                        kernels[322] = compute_kernel(x,   26.5  , 42.0  , 94.6  , 92.6  , 37.4 );
                        kernels[323] = compute_kernel(x,   27.8  , 59.5  , 92.5  , 66.0  , 36.9 );
                        kernels[324] = compute_kernel(x,   24.0  , 49.0  , 95.2  , 88.2  , 37.0 );
                        kernels[325] = compute_kernel(x,   28.0  , 66.1  , 94.1  , 65.5  , 36.9 );
                        kernels[326] = compute_kernel(x,   24.6  , 62.1  , 95.2  , 99.5  , 37.3 );
                        kernels[327] = compute_kernel(x,   29.0  , 40.9  , 94.5  , 68.2  , 37.0 );
                        kernels[328] = compute_kernel(x,   26.2  , 66.6  , 94.9  , 86.6  , 36.9 );
                        kernels[329] = compute_kernel(x,   27.3  , 62.6  , 94.1  , 91.4  , 36.9 );
                        kernels[330] = compute_kernel(x,   29.0  , 51.1  , 97.7  , 105.2  , 37.0 );
                        kernels[331] = compute_kernel(x,   25.6  , 51.3  , 93.9  , 76.2  , 37.2 );
                        kernels[332] = compute_kernel(x,   25.2  , 64.3  , 96.8  , 96.9  , 37.0 );
                        kernels[333] = compute_kernel(x,   25.7  , 56.6  , 97.6  , 98.6  , 36.8 );
                        kernels[334] = compute_kernel(x,   28.9  , 50.7  , 93.9  , 84.5  , 36.4 );
                        kernels[335] = compute_kernel(x,   24.6  , 52.1  , 97.0  , 93.6  , 37.2 );
                        kernels[336] = compute_kernel(x,   28.1  , 64.6  , 94.7  , 91.2  , 36.8 );
                        kernels[337] = compute_kernel(x,   24.8  , 52.9  , 94.2  , 98.1  , 37.3 );
                        kernels[338] = compute_kernel(x,   24.5  , 40.5  , 91.4  , 78.3  , 36.4 );
                        kernels[339] = compute_kernel(x,   27.8  , 65.1  , 97.0  , 91.9  , 37.4 );
                        kernels[340] = compute_kernel(x,   29.8  , 68.4  , 94.4  , 79.0  , 36.6 );
                        kernels[341] = compute_kernel(x,   29.3  , 58.0  , 95.5  , 93.1  , 36.8 );
                        kernels[342] = compute_kernel(x,   28.3  , 52.1  , 95.5  , 89.3  , 37.2 );
                        kernels[343] = compute_kernel(x,   29.0  , 43.0  , 94.9  , 88.1  , 37.3 );
                        kernels[344] = compute_kernel(x,   24.7  , 54.8  , 96.6  , 98.1  , 37.1 );
                        kernels[345] = compute_kernel(x,   24.1  , 49.2  , 95.2  , 89.0  , 37.0 );
                        kernels[346] = compute_kernel(x,   29.7  , 47.5  , 93.3  , 86.3  , 36.7 );
                        kernels[347] = compute_kernel(x,   27.8  , 42.4  , 94.6  , 79.8  , 37.1 );
                        kernels[348] = compute_kernel(x,   27.0  , 58.3  , 94.8  , 88.6  , 37.2 );
                        kernels[349] = compute_kernel(x,   24.2  , 55.4  , 94.2  , 81.5  , 36.8 );
                        kernels[350] = compute_kernel(x,   27.7  , 57.0  , 94.5  , 73.1  , 37.2 );
                        kernels[351] = compute_kernel(x,   24.2  , 47.9  , 94.5  , 86.1  , 37.0 );
                        kernels[352] = compute_kernel(x,   26.2  , 46.3  , 94.2  , 85.8  , 37.0 );
                        kernels[353] = compute_kernel(x,   26.0  , 61.5  , 96.0  , 101.8  , 36.9 );
                        kernels[354] = compute_kernel(x,   27.9  , 65.7  , 95.3  , 91.8  , 36.8 );
                        kernels[355] = compute_kernel(x,   26.3  , 44.9  , 95.7  , 101.7  , 37.2 );
                        kernels[356] = compute_kernel(x,   27.6  , 63.7  , 92.6  , 71.8  , 37.2 );
                        kernels[357] = compute_kernel(x,   27.5  , 49.0  , 96.8  , 94.2  , 37.0 );
                        kernels[358] = compute_kernel(x,   26.6  , 47.1  , 95.4  , 88.1  , 37.4 );
                        kernels[359] = compute_kernel(x,   27.5  , 53.8  , 94.5  , 80.5  , 36.3 );
                        kernels[360] = compute_kernel(x,   29.0  , 54.7  , 95.1  , 84.7  , 37.4 );
                        kernels[361] = compute_kernel(x,   29.0  , 56.8  , 94.8  , 81.9  , 37.1 );
                        kernels[362] = compute_kernel(x,   27.1  , 43.3  , 93.9  , 76.5  , 36.7 );
                        kernels[363] = compute_kernel(x,   26.9  , 47.9  , 94.1  , 84.0  , 36.7 );
                        kernels[364] = compute_kernel(x,   29.7  , 55.5  , 95.9  , 93.0  , 37.1 );
                        kernels[365] = compute_kernel(x,   28.7  , 54.3  , 92.6  , 71.5  , 37.1 );
                        kernels[366] = compute_kernel(x,   27.6  , 41.3  , 97.0  , 94.8  , 37.3 );
                        kernels[367] = compute_kernel(x,   26.5  , 69.1  , 92.0  , 77.3  , 37.2 );
                        kernels[368] = compute_kernel(x,   26.3  , 54.0  , 95.9  , 89.3  , 37.2 );
                        kernels[369] = compute_kernel(x,   25.1  , 67.0  , 94.6  , 88.6  , 36.9 );
                        kernels[370] = compute_kernel(x,   25.9  , 55.9  , 93.6  , 101.3  , 37.0 );
                        kernels[371] = compute_kernel(x,   29.5  , 42.8  , 94.1  , 65.4  , 37.2 );
                        kernels[372] = compute_kernel(x,   30.0  , 43.2  , 97.4  , 91.4  , 37.3 );
                        kernels[373] = compute_kernel(x,   27.6  , 41.8  , 97.1  , 97.1  , 36.7 );
                        kernels[374] = compute_kernel(x,   26.8  , 50.1  , 94.0  , 68.6  , 36.8 );
                        kernels[375] = compute_kernel(x,   27.4  , 45.4  , 96.4  , 91.4  , 37.1 );
                        kernels[376] = compute_kernel(x,   24.1  , 63.2  , 94.3  , 65.8  , 37.0 );
                        kernels[377] = compute_kernel(x,   29.6  , 41.3  , 95.4  , 83.5  , 36.8 );
                        kernels[378] = compute_kernel(x,   27.5  , 65.8  , 94.4  , 69.0  , 37.1 );
                        kernels[379] = compute_kernel(x,   25.8  , 66.2  , 95.0  , 89.0  , 37.2 );
                        kernels[380] = compute_kernel(x,   24.5  , 43.2  , 94.6  , 84.9  , 37.0 );
                        kernels[381] = compute_kernel(x,   28.9  , 40.6  , 95.1  , 91.7  , 36.6 );
                        kernels[382] = compute_kernel(x,   28.8  , 44.0  , 97.6  , 91.3  , 37.0 );
                        kernels[383] = compute_kernel(x,   25.3  , 60.9  , 95.8  , 92.6  , 37.1 );
                        kernels[384] = compute_kernel(x,   26.4  , 55.2  , 95.2  , 86.0  , 36.9 );
                        kernels[385] = compute_kernel(x,   27.9  , 65.1  , 95.0  , 86.2  , 37.2 );
                        kernels[386] = compute_kernel(x,   29.7  , 45.1  , 99.7  , 98.0  , 37.0 );
                        kernels[387] = compute_kernel(x,   24.8  , 45.6  , 95.2  , 96.8  , 36.9 );
                        kernels[388] = compute_kernel(x,   29.3  , 45.4  , 93.4  , 87.8  , 36.6 );
                        kernels[389] = compute_kernel(x,   25.8  , 69.9  , 94.5  , 80.2  , 36.9 );
                        kernels[390] = compute_kernel(x,   27.3  , 60.9  , 96.1  , 90.7  , 37.1 );
                        kernels[391] = compute_kernel(x,   27.0  , 55.5  , 93.9  , 66.1  , 36.9 );
                        kernels[392] = compute_kernel(x,   25.5  , 55.4  , 96.6  , 91.3  , 37.0 );
                        kernels[393] = compute_kernel(x,   27.6  , 59.4  , 94.0  , 76.0  , 37.1 );
                        kernels[394] = compute_kernel(x,   30.0  , 64.8  , 97.5  , 94.1  , 37.1 );
                        kernels[395] = compute_kernel(x,   24.3  , 60.9  , 96.9  , 94.7  , 37.0 );
                        kernels[396] = compute_kernel(x,   28.8  , 61.3  , 94.7  , 80.7  , 37.0 );
                        kernels[397] = compute_kernel(x,   26.7  , 52.2  , 96.5  , 95.2  , 36.9 );
                        kernels[398] = compute_kernel(x,   24.6  , 55.6  , 94.3  , 70.0  , 36.7 );
                        kernels[399] = compute_kernel(x,   28.2  , 68.0  , 95.4  , 92.7  , 37.0 );
                        kernels[400] = compute_kernel(x,   26.1  , 64.2  , 95.6  , 91.0  , 36.6 );
                        kernels[401] = compute_kernel(x,   25.4  , 46.3  , 94.0  , 94.0  , 36.8 );
                        kernels[402] = compute_kernel(x,   29.4  , 57.0  , 96.5  , 88.4  , 36.5 );
                        kernels[403] = compute_kernel(x,   27.0  , 51.0  , 95.0  , 94.1  , 36.8 );
                        kernels[404] = compute_kernel(x,   24.4  , 43.0  , 97.1  , 94.1  , 37.1 );
                        kernels[405] = compute_kernel(x,   28.1  , 48.3  , 97.1  , 93.8  , 36.9 );
                        kernels[406] = compute_kernel(x,   25.9  , 66.1  , 96.8  , 94.3  , 36.8 );
                        kernels[407] = compute_kernel(x,   25.8  , 68.4  , 93.1  , 76.7  , 37.2 );
                        kernels[408] = compute_kernel(x,   27.2  , 41.0  , 96.2  , 99.7  , 36.5 );
                        kernels[409] = compute_kernel(x,   25.2  , 59.3  , 94.0  , 75.0  , 37.0 );
                        kernels[410] = compute_kernel(x,   26.1  , 60.2  , 94.0  , 82.4  , 36.5 );
                        kernels[411] = compute_kernel(x,   28.9  , 66.9  , 96.9  , 94.3  , 37.4 );
                        kernels[412] = compute_kernel(x,   29.1  , 66.8  , 93.2  , 74.1  , 37.1 );
                        kernels[413] = compute_kernel(x,   26.9  , 55.8  , 92.5  , 90.8  , 36.7 );
                        kernels[414] = compute_kernel(x,   29.7  , 57.5  , 99.3  , 102.1  , 36.8 );
                        kernels[415] = compute_kernel(x,   26.9  , 44.4  , 97.2  , 100.0  , 37.1 );
                        kernels[416] = compute_kernel(x,   25.5  , 55.1  , 93.5  , 69.1  , 36.8 );
                        kernels[417] = compute_kernel(x,   26.7  , 66.8  , 94.3  , 77.5  , 36.8 );
                        kernels[418] = compute_kernel(x,   24.7  , 68.1  , 94.5  , 87.6  , 37.1 );
                        kernels[419] = compute_kernel(x,   24.9  , 69.4  , 96.0  , 94.5  , 37.1 );
                        kernels[420] = compute_kernel(x,   27.6  , 56.7  , 97.4  , 101.9  , 36.9 );
                        kernels[421] = compute_kernel(x,   28.4  , 59.7  , 94.0  , 71.7  , 36.7 );
                        kernels[422] = compute_kernel(x,   29.4  , 46.8  , 97.7  , 94.3  , 37.0 );
                        kernels[423] = compute_kernel(x,   28.9  , 51.2  , 96.3  , 87.0  , 36.6 );
                        kernels[424] = compute_kernel(x,   27.4  , 61.1  , 95.8  , 95.9  , 37.0 );
                        kernels[425] = compute_kernel(x,   27.2  , 64.6  , 96.5  , 93.3  , 36.7 );
                        kernels[426] = compute_kernel(x,   28.0  , 59.5  , 93.8  , 81.9  , 37.1 );
                        kernels[427] = compute_kernel(x,   27.9  , 51.7  , 94.9  , 97.8  , 37.5 );
                        kernels[428] = compute_kernel(x,   27.0  , 46.9  , 95.8  , 91.8  , 37.3 );
                        kernels[429] = compute_kernel(x,   27.7  , 55.6  , 93.4  , 78.1  , 37.3 );
                        kernels[430] = compute_kernel(x,   25.2  , 58.8  , 96.4  , 97.9  , 37.3 );
                        kernels[431] = compute_kernel(x,   28.6  , 60.4  , 98.0  , 101.9  , 37.0 );
                        kernels[432] = compute_kernel(x,   24.7  , 66.2  , 96.3  , 87.6  , 36.5 );
                        kernels[433] = compute_kernel(x,   29.0  , 51.0  , 96.7  , 47.6  , 36.7 );
                        kernels[434] = compute_kernel(x,   26.6  , 58.0  , 95.2  , 111.7  , 36.3 );
                        kernels[435] = compute_kernel(x,   26.7  , 62.7  , 94.1  , 142.0  , 37.1 );
                        kernels[436] = compute_kernel(x,   29.5  , 43.9  , 94.2  , 42.3  , 37.3 );
                        kernels[437] = compute_kernel(x,   26.0  , 62.8  , 92.5  , 120.9  , 36.9 );
                        kernels[438] = compute_kernel(x,   24.8  , 58.5  , 93.9  , 40.6  , 36.8 );
                        kernels[439] = compute_kernel(x,   28.6  , 44.4  , 92.2  , 37.4  , 36.6 );
                        kernels[440] = compute_kernel(x,   28.4  , 51.6  , 90.8  , 155.4  , 37.2 );
                        kernels[441] = compute_kernel(x,   28.6  , 68.1  , 94.4  , 185.3  , 36.7 );
                        kernels[442] = compute_kernel(x,   26.5  , 49.1  , 94.3  , 154.5  , 37.1 );
                        kernels[443] = compute_kernel(x,   27.0  , 52.6  , 91.2  , 118.9  , 37.1 );
                        kernels[444] = compute_kernel(x,   29.4  , 61.5  , 92.6  , 116.7  , 37.0 );
                        kernels[445] = compute_kernel(x,   28.4  , 42.5  , 93.2  , 116.2  , 37.1 );
                        kernels[446] = compute_kernel(x,   27.5  , 41.6  , 94.4  , 100.1  , 36.8 );
                        kernels[447] = compute_kernel(x,   27.3  , 53.0  , 94.6  , 147.1  , 37.2 );
                        kernels[448] = compute_kernel(x,   27.7  , 66.0  , 91.5  , 142.9  , 37.6 );
                        kernels[449] = compute_kernel(x,   25.0  , 48.2  , 94.3  , 152.2  , 37.2 );
                        kernels[450] = compute_kernel(x,   24.3  , 60.4  , 93.9  , 122.8  , 36.7 );
                        kernels[451] = compute_kernel(x,   24.6  , 41.9  , 90.1  , 30.9  , 36.4 );
                        kernels[452] = compute_kernel(x,   26.3  , 61.1  , 93.9  , 54.7  , 37.6 );
                        kernels[453] = compute_kernel(x,   28.6  , 41.0  , 95.2  , 48.6  , 36.7 );
                        kernels[454] = compute_kernel(x,   26.7  , 59.5  , 94.8  , 43.8  , 37.5 );
                        kernels[455] = compute_kernel(x,   28.0  , 65.2  , 94.3  , 45.6  , 36.6 );
                        kernels[456] = compute_kernel(x,   25.4  , 45.3  , 92.4  , 53.0  , 36.3 );
                        kernels[457] = compute_kernel(x,   25.2  , 60.5  , 91.1  , 41.5  , 36.8 );
                        kernels[458] = compute_kernel(x,   25.0  , 62.6  , 96.0  , 148.5  , 36.7 );
                        kernels[459] = compute_kernel(x,   25.2  , 48.8  , 90.3  , 62.1  , 36.9 );
                        kernels[460] = compute_kernel(x,   27.8  , 66.9  , 89.1  , 138.5  , 37.5 );
                        kernels[461] = compute_kernel(x,   24.2  , 63.9  , 90.2  , 126.5  , 37.1 );
                        kernels[462] = compute_kernel(x,   26.6  , 69.6  , 93.2  , 111.0  , 36.6 );
                        kernels[463] = compute_kernel(x,   24.6  , 53.1  , 94.2  , 124.2  , 37.0 );
                        kernels[464] = compute_kernel(x,   25.9  , 40.5  , 93.4  , 153.5  , 37.8 );
                        kernels[465] = compute_kernel(x,   24.7  , 70.0  , 93.4  , 127.1  , 36.8 );
                        kernels[466] = compute_kernel(x,   29.8  , 69.6  , 93.4  , 40.8  , 36.5 );
                        kernels[467] = compute_kernel(x,   25.1  , 41.7  , 94.2  , 49.2  , 37.6 );
                        kernels[468] = compute_kernel(x,   28.0  , 59.1  , 95.4  , 59.0  , 36.8 );
                        kernels[469] = compute_kernel(x,   25.4  , 46.3  , 94.7  , 50.4  , 37.1 );
                        kernels[470] = compute_kernel(x,   27.3  , 47.7  , 93.5  , 132.8  , 37.2 );
                        kernels[471] = compute_kernel(x,   27.5  , 52.2  , 93.4  , 148.5  , 36.8 );
                        kernels[472] = compute_kernel(x,   26.4  , 67.8  , 94.0  , 103.0  , 37.9 );
                        kernels[473] = compute_kernel(x,   28.4  , 45.2  , 92.7  , 127.5  , 36.7 );
                        kernels[474] = compute_kernel(x,   25.3  , 47.4  , 91.9  , 100.2  , 36.9 );
                        kernels[475] = compute_kernel(x,   28.0  , 62.0  , 95.8  , 56.8  , 37.2 );
                        kernels[476] = compute_kernel(x,   27.6  , 66.4  , 93.6  , 42.5  , 36.4 );
                        kernels[477] = compute_kernel(x,   26.8  , 44.8  , 92.7  , 49.2  , 37.2 );
                        kernels[478] = compute_kernel(x,   26.5  , 54.6  , 91.6  , 128.5  , 37.3 );
                        kernels[479] = compute_kernel(x,   24.8  , 55.1  , 94.4  , 49.6  , 36.4 );
                        kernels[480] = compute_kernel(x,   27.5  , 47.0  , 92.6  , 163.4  , 36.7 );
                        kernels[481] = compute_kernel(x,   24.1  , 66.0  , 91.8  , 42.3  , 36.4 );
                        kernels[482] = compute_kernel(x,   24.3  , 68.5  , 93.8  , 52.6  , 37.1 );
                        kernels[483] = compute_kernel(x,   25.0  , 56.1  , 93.2  , 131.8  , 36.6 );
                        kernels[484] = compute_kernel(x,   25.5  , 54.2  , 93.3  , 117.6  , 37.2 );
                        kernels[485] = compute_kernel(x,   27.6  , 53.8  , 95.1  , 51.1  , 37.2 );
                        kernels[486] = compute_kernel(x,   28.6  , 41.1  , 91.9  , 154.9  , 37.8 );
                        kernels[487] = compute_kernel(x,   24.5  , 56.3  , 91.0  , 52.1  , 36.9 );
                        kernels[488] = compute_kernel(x,   28.9  , 47.7  , 99.5  , 135.8  , 37.2 );
                        kernels[489] = compute_kernel(x,   25.6  , 62.8  , 91.5  , 41.0  , 36.3 );
                        kernels[490] = compute_kernel(x,   27.5  , 46.2  , 94.2  , 48.6  , 36.1 );
                        kernels[491] = compute_kernel(x,   27.3  , 62.3  , 93.9  , 49.3  , 37.4 );
                        kernels[492] = compute_kernel(x,   24.2  , 42.5  , 90.5  , 150.5  , 37.3 );
                        kernels[493] = compute_kernel(x,   24.2  , 64.1  , 91.6  , 48.7  , 37.1 );
                        kernels[494] = compute_kernel(x,   24.5  , 44.5  , 90.9  , 48.1  , 37.3 );
                        kernels[495] = compute_kernel(x,   25.8  , 47.6  , 93.6  , 160.1  , 37.4 );
                        kernels[496] = compute_kernel(x,   24.5  , 55.8  , 91.3  , 156.5  , 36.3 );
                        kernels[497] = compute_kernel(x,   27.7  , 57.8  , 91.6  , 38.8  , 36.6 );
                        kernels[498] = compute_kernel(x,   25.4  , 69.1  , 95.7  , 41.8  , 37.4 );
                        kernels[499] = compute_kernel(x,   25.4  , 44.1  , 96.5  , 147.5  , 37.1 );
                        kernels[500] = compute_kernel(x,   28.2  , 67.6  , 91.0  , 159.4  , 36.7 );
                        kernels[501] = compute_kernel(x,   27.2  , 50.1  , 95.4  , 126.6  , 37.2 );
                        kernels[502] = compute_kernel(x,   27.5  , 41.5  , 92.1  , 127.6  , 37.6 );
                        kernels[503] = compute_kernel(x,   27.6  , 45.2  , 92.9  , 49.3  , 37.5 );
                        kernels[504] = compute_kernel(x,   24.8  , 56.5  , 94.7  , 132.3  , 36.7 );
                        kernels[505] = compute_kernel(x,   27.2  , 59.1  , 91.9  , 53.8  , 37.4 );
                        kernels[506] = compute_kernel(x,   26.1  , 59.6  , 92.4  , 55.2  , 37.2 );
                        kernels[507] = compute_kernel(x,   29.8  , 51.7  , 95.3  , 129.3  , 37.2 );
                        kernels[508] = compute_kernel(x,   26.7  , 53.3  , 93.6  , 143.0  , 37.4 );
                        kernels[509] = compute_kernel(x,   29.9  , 56.4  , 90.7  , 117.1  , 36.7 );
                        kernels[510] = compute_kernel(x,   27.7  , 64.7  , 93.2  , 50.4  , 36.0 );
                        kernels[511] = compute_kernel(x,   25.7  , 54.1  , 94.0  , 131.3  , 36.7 );
                        kernels[512] = compute_kernel(x,   29.2  , 57.5  , 96.3  , 136.6  , 37.9 );
                        kernels[513] = compute_kernel(x,   26.7  , 55.4  , 95.8  , 110.3  , 36.7 );
                        kernels[514] = compute_kernel(x,   25.1  , 69.7  , 90.3  , 37.9  , 37.2 );
                        kernels[515] = compute_kernel(x,   27.8  , 52.2  , 95.9  , 92.1  , 37.2 );
                        kernels[516] = compute_kernel(x,   28.6  , 57.8  , 93.2  , 170.7  , 37.5 );
                        kernels[517] = compute_kernel(x,   25.0  , 68.5  , 95.2  , 148.6  , 37.2 );
                        kernels[518] = compute_kernel(x,   28.2  , 46.5  , 91.6  , 180.1  , 37.8 );
                        kernels[519] = compute_kernel(x,   28.4  , 40.8  , 97.5  , 44.7  , 37.3 );
                        kernels[520] = compute_kernel(x,   26.7  , 42.0  , 91.7  , 163.9  , 36.4 );
                        kernels[521] = compute_kernel(x,   29.7  , 43.9  , 92.0  , 140.2  , 37.3 );
                        kernels[522] = compute_kernel(x,   27.2  , 55.7  , 93.5  , 158.5  , 36.4 );
                        kernels[523] = compute_kernel(x,   28.0  , 57.2  , 97.3  , 154.7  , 36.8 );
                        kernels[524] = compute_kernel(x,   27.5  , 42.2  , 93.3  , 36.1  , 37.2 );
                        kernels[525] = compute_kernel(x,   24.5  , 60.3  , 94.5  , 154.6  , 37.2 );
                        kernels[526] = compute_kernel(x,   29.4  , 64.1  , 92.3  , 141.1  , 37.0 );
                        kernels[527] = compute_kernel(x,   27.2  , 49.1  , 94.6  , 48.1  , 37.5 );
                        kernels[528] = compute_kernel(x,   28.0  , 67.1  , 91.4  , 141.5  , 37.1 );
                        kernels[529] = compute_kernel(x,   25.8  , 56.7  , 97.3  , 137.1  , 36.8 );
                        kernels[530] = compute_kernel(x,   28.7  , 66.4  , 90.8  , 110.6  , 36.9 );
                        kernels[531] = compute_kernel(x,   25.0  , 59.1  , 95.5  , 77.3  , 36.2 );
                        kernels[532] = compute_kernel(x,   28.6  , 49.5  , 93.2  , 35.9  , 36.7 );
                        kernels[533] = compute_kernel(x,   25.0  , 61.9  , 95.4  , 149.0  , 37.0 );
                        kernels[534] = compute_kernel(x,   25.9  , 68.8  , 93.1  , 145.8  , 38.0 );
                        kernels[535] = compute_kernel(x,   24.3  , 50.0  , 93.7  , 44.3  , 37.0 );
                        kernels[536] = compute_kernel(x,   27.7  , 69.0  , 91.9  , 49.9  , 36.6 );
                        kernels[537] = compute_kernel(x,   24.4  , 67.0  , 91.1  , 56.0  , 37.2 );
                        kernels[538] = compute_kernel(x,   27.7  , 51.4  , 96.0  , 35.2  , 36.9 );
                        kernels[539] = compute_kernel(x,   28.5  , 62.6  , 91.4  , 124.2  , 37.4 );
                        kernels[540] = compute_kernel(x,   25.0  , 52.0  , 91.6  , 136.2  , 36.8 );
                        kernels[541] = compute_kernel(x,   29.2  , 53.1  , 93.8  , 49.1  , 37.3 );
                        kernels[542] = compute_kernel(x,   24.1  , 45.8  , 91.1  , 45.1  , 37.9 );
                        kernels[543] = compute_kernel(x,   26.1  , 47.2  , 93.4  , 142.3  , 36.4 );
                        kernels[544] = compute_kernel(x,   26.2  , 40.0  , 96.7  , 168.3  , 36.8 );
                        kernels[545] = compute_kernel(x,   26.6  , 63.5  , 94.1  , 52.0  , 37.3 );
                        kernels[546] = compute_kernel(x,   29.6  , 45.5  , 96.1  , 42.7  , 37.0 );
                        kernels[547] = compute_kernel(x,   28.6  , 59.4  , 90.9  , 58.7  , 37.0 );
                        kernels[548] = compute_kernel(x,   26.7  , 68.0  , 91.1  , 48.8  , 37.3 );
                        kernels[549] = compute_kernel(x,   26.8  , 63.1  , 94.1  , 162.4  , 36.4 );
                        kernels[550] = compute_kernel(x,   27.1  , 64.7  , 96.3  , 34.0  , 37.0 );
                        kernels[551] = compute_kernel(x,   29.9  , 51.4  , 94.8  , 45.1  , 36.9 );
                        kernels[552] = compute_kernel(x,   29.4  , 44.1  , 91.5  , 46.2  , 37.2 );
                        kernels[553] = compute_kernel(x,   25.7  , 55.6  , 92.8  , 105.2  , 37.0 );
                        kernels[554] = compute_kernel(x,   26.1  , 67.2  , 95.0  , 144.8  , 36.4 );
                        kernels[555] = compute_kernel(x,   25.0  , 45.7  , 96.3  , 56.4  , 37.0 );
                        kernels[556] = compute_kernel(x,   29.2  , 57.1  , 95.0  , 111.2  , 37.3 );
                        kernels[557] = compute_kernel(x,   27.3  , 43.2  , 92.4  , 99.8  , 37.2 );
                        kernels[558] = compute_kernel(x,   29.5  , 59.2  , 91.8  , 47.8  , 36.8 );
                        kernels[559] = compute_kernel(x,   25.8  , 48.2  , 93.8  , 148.7  , 36.8 );
                        kernels[560] = compute_kernel(x,   25.8  , 61.1  , 95.9  , 126.5  , 37.3 );
                        kernels[561] = compute_kernel(x,   26.7  , 68.4  , 97.1  , 156.2  , 37.0 );
                        kernels[562] = compute_kernel(x,   25.4  , 56.2  , 93.8  , 57.9  , 36.6 );
                        kernels[563] = compute_kernel(x,   29.8  , 52.9  , 92.0  , 46.1  , 37.0 );
                        kernels[564] = compute_kernel(x,   26.7  , 48.6  , 95.5  , 145.8  , 36.9 );
                        kernels[565] = compute_kernel(x,   26.6  , 59.5  , 91.9  , 151.4  , 37.1 );
                        kernels[566] = compute_kernel(x,   26.1  , 64.2  , 94.0  , 178.3  , 37.3 );
                        kernels[567] = compute_kernel(x,   29.4  , 41.7  , 95.9  , 44.0  , 37.0 );
                        kernels[568] = compute_kernel(x,   28.8  , 62.4  , 92.2  , 152.4  , 36.7 );
                        kernels[569] = compute_kernel(x,   28.6  , 69.7  , 93.1  , 175.2  , 36.6 );
                        kernels[570] = compute_kernel(x,   29.7  , 46.0  , 91.8  , 42.3  , 36.9 );
                        kernels[571] = compute_kernel(x,   25.8  , 59.3  , 92.1  , 163.3  , 37.4 );
                        kernels[572] = compute_kernel(x,   27.5  , 42.2  , 92.5  , 54.3  , 36.7 );
                        kernels[573] = compute_kernel(x,   29.8  , 69.6  , 94.1  , 121.3  , 36.6 );
                        kernels[574] = compute_kernel(x,   24.3  , 60.0  , 90.7  , 181.0  , 36.8 );
                        kernels[575] = compute_kernel(x,   29.3  , 62.5  , 91.2  , 138.7  , 37.3 );
                        kernels[576] = compute_kernel(x,   24.8  , 58.4  , 98.5  , 137.9  , 37.4 );
                        kernels[577] = compute_kernel(x,   27.1  , 57.4  , 93.1  , 170.6  , 37.0 );
                        kernels[578] = compute_kernel(x,   29.9  , 40.0  , 92.5  , 46.0  , 36.1 );
                        kernels[579] = compute_kernel(x,   28.8  , 47.9  , 90.1  , 148.6  , 36.3 );
                        kernels[580] = compute_kernel(x,   25.8  , 40.6  , 93.4  , 140.6  , 37.5 );
                        kernels[581] = compute_kernel(x,   24.4  , 48.9  , 94.4  , 35.8  , 37.0 );
                        kernels[582] = compute_kernel(x,   24.8  , 44.1  , 94.5  , 116.7  , 37.7 );
                        kernels[583] = compute_kernel(x,   28.8  , 45.8  , 91.1  , 158.1  , 36.7 );
                        kernels[584] = compute_kernel(x,   24.3  , 65.2  , 93.4  , 36.7  , 37.2 );
                        kernels[585] = compute_kernel(x,   27.1  , 66.4  , 91.7  , 37.4  , 37.3 );
                        kernels[586] = compute_kernel(x,   27.9  , 53.6  , 97.4  , 37.2  , 37.2 );
                        kernels[587] = compute_kernel(x,   27.2  , 59.6  , 94.5  , 56.8  , 36.9 );
                        kernels[588] = compute_kernel(x,   28.4  , 62.7  , 93.8  , 43.7  , 36.8 );
                        kernels[589] = compute_kernel(x,   28.0  , 41.2  , 91.1  , 131.1  , 37.2 );
                        kernels[590] = compute_kernel(x,   25.1  , 58.5  , 92.6  , 42.6  , 37.0 );
                        kernels[591] = compute_kernel(x,   28.8  , 54.9  , 92.3  , 39.8  , 37.7 );
                        kernels[592] = compute_kernel(x,   29.6  , 61.2  , 90.7  , 47.7  , 37.4 );
                        kernels[593] = compute_kernel(x,   28.4  , 50.0  , 91.5  , 88.7  , 37.1 );
                        kernels[594] = compute_kernel(x,   27.3  , 68.5  , 93.5  , 58.6  , 36.9 );
                        kernels[595] = compute_kernel(x,   24.9  , 65.9  , 93.6  , 112.0  , 36.9 );
                        kernels[596] = compute_kernel(x,   27.3  , 64.0  , 92.8  , 55.6  , 36.7 );
                        kernels[597] = compute_kernel(x,   26.0  , 47.3  , 95.0  , 148.7  , 37.3 );
                        kernels[598] = compute_kernel(x,   29.7  , 48.7  , 92.9  , 50.6  , 36.8 );
                        kernels[599] = compute_kernel(x,   28.0  , 43.5  , 95.4  , 123.3  , 36.9 );
                        kernels[600] = compute_kernel(x,   29.9  , 58.3  , 94.6  , 35.6  , 35.8 );
                        kernels[601] = compute_kernel(x,   24.4  , 69.1  , 91.6  , 111.9  , 36.6 );
                        kernels[602] = compute_kernel(x,   29.8  , 47.6  , 97.2  , 155.7  , 36.9 );
                        kernels[603] = compute_kernel(x,   29.8  , 43.8  , 90.8  , 38.6  , 37.1 );
                        kernels[604] = compute_kernel(x,   24.1  , 62.8  , 93.3  , 135.0  , 36.3 );
                        kernels[605] = compute_kernel(x,   24.4  , 56.9  , 93.1  , 46.2  , 37.3 );
                        kernels[606] = compute_kernel(x,   28.4  , 53.6  , 92.6  , 56.9  , 38.2 );
                        kernels[607] = compute_kernel(x,   25.5  , 60.1  , 95.2  , 130.3  , 37.3 );
                        kernels[608] = compute_kernel(x,   24.3  , 58.4  , 92.1  , 47.2  , 37.4 );
                        kernels[609] = compute_kernel(x,   25.0  , 59.7  , 94.9  , 44.8  , 37.0 );
                        kernels[610] = compute_kernel(x,   27.3  , 63.1  , 92.2  , 112.1  , 37.5 );
                        kernels[611] = compute_kernel(x,   25.1  , 45.4  , 96.6  , 61.2  , 37.5 );
                        kernels[612] = compute_kernel(x,   27.1  , 51.9  , 91.4  , 44.1  , 36.7 );
                        kernels[613] = compute_kernel(x,   27.1  , 42.0  , 90.1  , 46.3  , 37.1 );
                        kernels[614] = compute_kernel(x,   28.1  , 53.6  , 93.5  , 129.4  , 36.8 );
                        kernels[615] = compute_kernel(x,   28.8  , 61.5  , 90.2  , 39.8  , 37.4 );
                        kernels[616] = compute_kernel(x,   26.6  , 63.6  , 97.2  , 40.9  , 37.1 );
                        kernels[617] = compute_kernel(x,   26.8  , 59.2  , 93.8  , 143.7  , 37.0 );
                        kernels[618] = compute_kernel(x,   27.8  , 49.9  , 92.4  , 128.7  , 36.8 );
                        kernels[619] = compute_kernel(x,   24.2  , 59.6  , 95.9  , 110.7  , 36.5 );
                        kernels[620] = compute_kernel(x,   29.4  , 63.0  , 92.8  , 127.4  , 37.3 );
                        kernels[621] = compute_kernel(x,   25.9  , 45.6  , 92.3  , 32.8  , 37.2 );
                        kernels[622] = compute_kernel(x,   26.7  , 45.1  , 92.2  , 56.0  , 37.4 );
                        kernels[623] = compute_kernel(x,   25.4  , 48.5  , 92.8  , 146.5  , 37.0 );
                        kernels[624] = compute_kernel(x,   27.5  , 53.2  , 90.9  , 139.0  , 37.4 );
                        kernels[625] = compute_kernel(x,   24.5  , 46.8  , 92.4  , 66.0  , 37.2 );
                        kernels[626] = compute_kernel(x,   25.5  , 66.5  , 92.0  , 175.9  , 37.0 );
                        kernels[627] = compute_kernel(x,   27.8  , 51.7  , 91.6  , 45.6  , 37.4 );
                        kernels[628] = compute_kernel(x,   24.2  , 62.3  , 93.3  , 47.2  , 37.2 );
                        kernels[629] = compute_kernel(x,   26.8  , 42.4  , 92.3  , 159.9  , 36.9 );
                        kernels[630] = compute_kernel(x,   27.6  , 52.0  , 91.9  , 180.9  , 37.5 );
                        kernels[631] = compute_kernel(x,   26.3  , 65.7  , 92.0  , 117.6  , 37.7 );
                        kernels[632] = compute_kernel(x,   29.6  , 44.2  , 97.5  , 53.0  , 36.8 );
                        kernels[633] = compute_kernel(x,   26.2  , 57.3  , 94.1  , 50.9  , 36.8 );
                        kernels[634] = compute_kernel(x,   25.6  , 53.2  , 93.5  , 44.3  , 37.5 );
                        kernels[635] = compute_kernel(x,   26.1  , 54.1  , 95.8  , 42.8  , 36.7 );
                        kernels[636] = compute_kernel(x,   27.5  , 69.6  , 95.5  , 49.9  , 36.9 );
                        kernels[637] = compute_kernel(x,   28.9  , 57.8  , 94.8  , 32.8  , 36.6 );
                        kernels[638] = compute_kernel(x,   27.0  , 52.9  , 90.8  , 177.4  , 37.4 );
                        kernels[639] = compute_kernel(x,   29.3  , 59.3  , 93.7  , 54.7  , 36.4 );
                        kernels[640] = compute_kernel(x,   29.5  , 62.6  , 95.0  , 125.0  , 37.7 );
                        kernels[641] = compute_kernel(x,   26.1  , 51.0  , 93.9  , 124.5  , 36.6 );
                        kernels[642] = compute_kernel(x,   28.7  , 43.1  , 93.0  , 120.8  , 37.5 );
                        kernels[643] = compute_kernel(x,   27.6  , 48.2  , 93.0  , 35.8  , 37.1 );
                        kernels[644] = compute_kernel(x,   29.8  , 51.9  , 93.7  , 53.4  , 37.1 );
                        kernels[645] = compute_kernel(x,   24.2  , 65.6  , 90.0  , 144.7  , 37.4 );
                        kernels[646] = compute_kernel(x,   29.4  , 44.0  , 92.1  , 51.2  , 36.5 );
                        kernels[647] = compute_kernel(x,   25.3  , 63.5  , 93.5  , 153.8  , 37.1 );
                        kernels[648] = compute_kernel(x,   28.9  , 61.7  , 91.6  , 196.9  , 36.5 );
                        kernels[649] = compute_kernel(x,   27.0  , 46.8  , 91.6  , 46.7  , 37.1 );
                        kernels[650] = compute_kernel(x,   29.4  , 55.8  , 91.4  , 48.5  , 36.8 );
                        kernels[651] = compute_kernel(x,   25.4  , 54.3  , 96.4  , 157.9  , 37.0 );
                        kernels[652] = compute_kernel(x,   28.4  , 59.7  , 96.1  , 54.7  , 37.8 );
                        kernels[653] = compute_kernel(x,   26.6  , 58.5  , 91.5  , 53.2  , 36.4 );
                        kernels[654] = compute_kernel(x,   29.1  , 43.4  , 94.8  , 47.1  , 36.4 );
                        kernels[655] = compute_kernel(x,   24.1  , 67.1  , 91.4  , 52.5  , 37.5 );
                        kernels[656] = compute_kernel(x,   24.9  , 41.9  , 92.0  , 164.7  , 37.6 );
                        kernels[657] = compute_kernel(x,   24.6  , 40.6  , 93.7  , 126.7  , 36.3 );
                        kernels[658] = compute_kernel(x,   25.5  , 46.0  , 92.0  , 37.1  , 36.4 );
                        kernels[659] = compute_kernel(x,   27.4  , 49.1  , 94.4  , 42.3  , 37.2 );
                        kernels[660] = compute_kernel(x,   26.3  , 45.1  , 94.4  , 42.1  , 37.6 );
                        kernels[661] = compute_kernel(x,   26.3  , 43.9  , 94.6  , 102.8  , 37.4 );
                        kernels[662] = compute_kernel(x,   25.7  , 56.5  , 91.5  , 116.2  , 38.3 );
                        kernels[663] = compute_kernel(x,   27.3  , 47.6  , 96.4  , 143.1  , 36.5 );
                        kernels[664] = compute_kernel(x,   28.9  , 50.5  , 92.0  , 51.4  , 36.7 );
                        kernels[665] = compute_kernel(x,   25.5  , 51.0  , 90.3  , 177.9  , 36.8 );
                        kernels[666] = compute_kernel(x,   26.7  , 60.6  , 92.1  , 137.0  , 37.1 );
                        kernels[667] = compute_kernel(x,   27.5  , 57.4  , 95.7  , 146.1  , 36.7 );
                        kernels[668] = compute_kernel(x,   28.4  , 47.4  , 93.1  , 139.1  , 37.2 );
                        kernels[669] = compute_kernel(x,   24.9  , 70.0  , 93.7  , 120.1  , 36.7 );
                        kernels[670] = compute_kernel(x,   27.2  , 49.7  , 95.3  , 143.8  , 37.0 );
                        kernels[671] = compute_kernel(x,   24.3  , 67.8  , 96.7  , 34.3  , 36.8 );
                        kernels[672] = compute_kernel(x,   24.9  , 66.5  , 93.0  , 55.6  , 36.6 );
                        kernels[673] = compute_kernel(x,   28.4  , 61.6  , 94.0  , 107.5  , 36.9 );
                        kernels[674] = compute_kernel(x,   26.5  , 62.0  , 94.3  , 49.5  , 37.4 );
                        kernels[675] = compute_kernel(x,   27.3  , 59.1  , 94.2  , 53.5  , 36.8 );
                        kernels[676] = compute_kernel(x,   29.9  , 50.2  , 90.3  , 38.7  , 36.3 );
                        kernels[677] = compute_kernel(x,   27.4  , 44.0  , 93.5  , 41.4  , 37.8 );
                        kernels[678] = compute_kernel(x,   27.9  , 44.8  , 92.5  , 44.5  , 37.6 );
                        kernels[679] = compute_kernel(x,   26.3  , 64.0  , 94.2  , 154.5  , 36.8 );
                        kernels[680] = compute_kernel(x,   26.0  , 50.4  , 93.2  , 43.8  , 37.0 );
                        kernels[681] = compute_kernel(x,   29.3  , 65.8  , 91.8  , 145.4  , 37.3 );
                        kernels[682] = compute_kernel(x,   28.9  , 63.5  , 91.9  , 45.6  , 36.5 );
                        kernels[683] = compute_kernel(x,   28.5  , 59.1  , 91.4  , 39.7  , 36.6 );
                        kernels[684] = compute_kernel(x,   25.1  , 54.8  , 91.7  , 146.1  , 36.9 );
                        kernels[685] = compute_kernel(x,   27.1  , 46.6  , 95.1  , 171.2  , 36.7 );
                        kernels[686] = compute_kernel(x,   24.6  , 67.8  , 93.1  , 118.7  , 36.6 );
                        kernels[687] = compute_kernel(x,   26.2  , 66.5  , 92.9  , 138.0  , 37.2 );
                        kernels[688] = compute_kernel(x,   29.9  , 68.1  , 95.5  , 41.1  , 36.9 );
                        kernels[689] = compute_kernel(x,   29.3  , 52.7  , 94.3  , 116.9  , 37.4 );
                        kernels[690] = compute_kernel(x,   24.7  , 64.4  , 94.6  , 179.0  , 37.3 );
                        kernels[691] = compute_kernel(x,   29.5  , 49.8  , 90.3  , 45.6  , 37.0 );
                        kernels[692] = compute_kernel(x,   24.5  , 66.8  , 93.1  , 43.8  , 36.4 );
                        kernels[693] = compute_kernel(x,   25.2  , 61.5  , 92.0  , 139.0  , 36.9 );
                        kernels[694] = compute_kernel(x,   27.9  , 44.1  , 93.0  , 135.3  , 36.5 );
                        kernels[695] = compute_kernel(x,   29.7  , 55.1  , 95.5  , 54.8  , 37.4 );
                        kernels[696] = compute_kernel(x,   26.1  , 59.8  , 91.1  , 52.4  , 37.9 );
                        kernels[697] = compute_kernel(x,   29.1  , 56.7  , 92.4  , 155.8  , 37.4 );
                        kernels[698] = compute_kernel(x,   26.4  , 62.9  , 92.3  , 139.7  , 37.5 );
                        kernels[699] = compute_kernel(x,   26.6  , 50.1  , 91.4  , 131.3  , 37.3 );
                        kernels[700] = compute_kernel(x,   25.0  , 61.1  , 92.3  , 54.6  , 36.3 );
                        kernels[701] = compute_kernel(x,   28.0  , 42.8  , 93.5  , 49.5  , 36.6 );
                        kernels[702] = compute_kernel(x,   28.6  , 41.2  , 94.0  , 41.6  , 36.9 );
                        kernels[703] = compute_kernel(x,   27.3  , 48.4  , 93.4  , 128.4  , 36.8 );
                        kernels[704] = compute_kernel(x,   29.8  , 54.9  , 93.4  , 117.1  , 36.9 );
                        kernels[705] = compute_kernel(x,   26.9  , 55.4  , 93.7  , 142.3  , 37.3 );
                        kernels[706] = compute_kernel(x,   25.4  , 52.8  , 92.9  , 152.2  , 36.7 );
                        kernels[707] = compute_kernel(x,   26.2  , 41.4  , 91.9  , 88.7  , 36.5 );
                        kernels[708] = compute_kernel(x,   28.4  , 65.3  , 91.3  , 101.7  , 37.2 );
                        kernels[709] = compute_kernel(x,   27.7  , 48.6  , 95.1  , 114.4  , 36.2 );
                        kernels[710] = compute_kernel(x,   28.7  , 48.5  , 96.7  , 82.9  , 37.0 );
                        kernels[711] = compute_kernel(x,   27.6  , 67.4  , 96.1  , 108.0  , 36.7 );
                        kernels[712] = compute_kernel(x,   29.8  , 50.3  , 97.1  , 95.5  , 36.5 );
                        kernels[713] = compute_kernel(x,   24.2  , 58.1  , 90.4  , 104.3  , 37.3 );
                        kernels[714] = compute_kernel(x,   27.3  , 57.5  , 93.5  , 81.6  , 37.6 );
                        kernels[715] = compute_kernel(x,   26.1  , 62.7  , 91.8  , 98.9  , 37.1 );
                        kernels[716] = compute_kernel(x,   28.4  , 63.1  , 99.2  , 114.2  , 37.1 );
                        kernels[717] = compute_kernel(x,   29.2  , 53.4  , 97.5  , 102.8  , 36.3 );
                        kernels[718] = compute_kernel(x,   28.6  , 60.3  , 94.8  , 93.7  , 36.0 );
                        kernels[719] = compute_kernel(x,   27.1  , 41.9  , 94.0  , 104.9  , 36.8 );
                        kernels[720] = compute_kernel(x,   24.5  , 61.5  , 94.0  , 99.3  , 36.3 );
                        kernels[721] = compute_kernel(x,   25.9  , 53.3  , 98.5  , 99.1  , 36.7 );
                        kernels[722] = compute_kernel(x,   29.2  , 54.2  , 93.9  , 75.8  , 37.0 );
                        kernels[723] = compute_kernel(x,   24.0  , 45.0  , 95.8  , 87.3  , 36.7 );
                        kernels[724] = compute_kernel(x,   24.9  , 63.9  , 95.6  , 109.5  , 38.3 );
                        kernels[725] = compute_kernel(x,   25.5  , 54.3  , 96.7  , 85.5  , 37.0 );
                        kernels[726] = compute_kernel(x,   25.9  , 46.1  , 100.0  , 99.2  , 36.9 );
                        kernels[727] = compute_kernel(x,   28.9  , 69.6  , 93.2  , 97.3  , 36.8 );
                        kernels[728] = compute_kernel(x,   27.8  , 41.5  , 91.6  , 73.8  , 36.7 );
                        kernels[729] = compute_kernel(x,   26.1  , 61.6  , 95.3  , 93.8  , 37.3 );
                        kernels[730] = compute_kernel(x,   25.0  , 54.0  , 90.9  , 100.8  , 37.8 );
                        kernels[731] = compute_kernel(x,   24.0  , 62.9  , 94.0  , 94.3  , 37.2 );
                        kernels[732] = compute_kernel(x,   26.0  , 50.1  , 91.9  , 134.0  , 36.8 );
                        kernels[733] = compute_kernel(x,   27.9  , 67.8  , 93.4  , 103.4  , 37.4 );
                        kernels[734] = compute_kernel(x,   26.4  , 48.4  , 99.7  , 112.0  , 37.0 );
                        kernels[735] = compute_kernel(x,   29.6  , 69.0  , 96.8  , 91.5  , 36.8 );
                        kernels[736] = compute_kernel(x,   25.8  , 68.8  , 93.1  , 105.1  , 37.1 );
                        kernels[737] = compute_kernel(x,   28.2  , 53.0  , 94.4  , 105.3  , 37.8 );
                        kernels[738] = compute_kernel(x,   26.3  , 57.3  , 95.8  , 90.1  , 37.4 );
                        kernels[739] = compute_kernel(x,   24.3  , 61.5  , 97.3  , 103.7  , 36.4 );
                        kernels[740] = compute_kernel(x,   24.9  , 62.1  , 93.6  , 90.0  , 37.8 );
                        kernels[741] = compute_kernel(x,   26.5  , 69.2  , 100.0  , 95.7  , 36.2 );
                        kernels[742] = compute_kernel(x,   27.0  , 42.2  , 98.0  , 97.1  , 36.9 );
                        kernels[743] = compute_kernel(x,   29.1  , 46.0  , 94.5  , 122.2  , 36.8 );
                        kernels[744] = compute_kernel(x,   27.9  , 46.5  , 92.8  , 85.2  , 36.6 );
                        kernels[745] = compute_kernel(x,   27.3  , 51.7  , 96.9  , 102.4  , 36.7 );
                        kernels[746] = compute_kernel(x,   24.6  , 48.0  , 95.8  , 90.2  , 36.7 );
                        kernels[747] = compute_kernel(x,   29.1  , 60.6  , 92.8  , 112.6  , 37.2 );
                        kernels[748] = compute_kernel(x,   24.1  , 49.4  , 95.2  , 81.9  , 37.1 );
                        kernels[749] = compute_kernel(x,   28.8  , 49.1  , 88.6  , 90.3  , 37.5 );
                        kernels[750] = compute_kernel(x,   29.2  , 44.7  , 93.0  , 118.1  , 37.2 );
                        kernels[751] = compute_kernel(x,   26.3  , 55.6  , 93.1  , 108.4  , 37.6 );
                        kernels[752] = compute_kernel(x,   28.7  , 63.3  , 91.0  , 93.2  , 37.5 );
                        kernels[753] = compute_kernel(x,   24.5  , 63.9  , 92.6  , 99.5  , 37.4 );
                        kernels[754] = compute_kernel(x,   26.2  , 44.4  , 92.5  , 85.8  , 36.9 );
                        kernels[755] = compute_kernel(x,   24.3  , 68.3  , 97.8  , 98.3  , 36.4 );
                        kernels[756] = compute_kernel(x,   30.0  , 69.2  , 94.4  , 106.4  , 37.5 );
                        kernels[757] = compute_kernel(x,   29.8  , 42.0  , 95.5  , 94.9  , 36.8 );
                        kernels[758] = compute_kernel(x,   29.9  , 69.2  , 92.8  , 91.3  , 36.8 );
                        kernels[759] = compute_kernel(x,   29.7  , 43.8  , 95.9  , 86.4  , 37.3 );
                        kernels[760] = compute_kernel(x,   29.2  , 66.7  , 95.6  , 94.7  , 37.3 );
                        kernels[761] = compute_kernel(x,   27.6  , 52.6  , 94.6  , 87.5  , 36.9 );
                        kernels[762] = compute_kernel(x,   29.1  , 47.3  , 93.5  , 86.7  , 37.6 );
                        kernels[763] = compute_kernel(x,   25.6  , 67.3  , 94.5  , 101.9  , 37.3 );
                        kernels[764] = compute_kernel(x,   25.5  , 57.5  , 95.5  , 91.7  , 37.0 );
                        kernels[765] = compute_kernel(x,   29.1  , 48.2  , 97.0  , 97.3  , 36.2 );
                        kernels[766] = compute_kernel(x,   26.1  , 68.9  , 96.7  , 87.5  , 36.8 );
                        kernels[767] = compute_kernel(x,   27.0  , 59.2  , 96.1  , 91.4  , 37.6 );
                        kernels[768] = compute_kernel(x,   29.4  , 44.4  , 94.2  , 80.4  , 37.5 );
                        kernels[769] = compute_kernel(x,   25.3  , 49.0  , 95.1  , 75.7  , 37.3 );
                        kernels[770] = compute_kernel(x,   25.5  , 50.6  , 98.6  , 90.8  , 36.9 );
                        kernels[771] = compute_kernel(x,   24.7  , 41.2  , 93.5  , 124.9  , 37.3 );
                        kernels[772] = compute_kernel(x,   27.1  , 42.0  , 92.9  , 84.8  , 36.7 );
                        kernels[773] = compute_kernel(x,   27.3  , 47.1  , 95.0  , 96.9  , 36.9 );
                        kernels[774] = compute_kernel(x,   25.9  , 49.0  , 88.7  , 102.1  , 37.3 );
                        kernels[775] = compute_kernel(x,   29.1  , 54.9  , 95.4  , 84.7  , 37.3 );
                        kernels[776] = compute_kernel(x,   25.4  , 58.1  , 94.6  , 109.1  , 36.6 );
                        kernels[777] = compute_kernel(x,   29.4  , 58.9  , 89.9  , 86.2  , 37.4 );
                        kernels[778] = compute_kernel(x,   24.8  , 49.6  , 98.4  , 106.8  , 37.1 );
                        kernels[779] = compute_kernel(x,   25.9  , 62.9  , 98.2  , 102.5  , 36.5 );
                        kernels[780] = compute_kernel(x,   27.4  , 57.6  , 92.2  , 91.4  , 36.9 );
                        kernels[781] = compute_kernel(x,   24.9  , 57.7  , 92.9  , 98.4  , 36.8 );
                        kernels[782] = compute_kernel(x,   28.3  , 58.8  , 97.2  , 86.3  , 36.9 );
                        kernels[783] = compute_kernel(x,   28.2  , 52.5  , 93.4  , 75.7  , 36.6 );
                        kernels[784] = compute_kernel(x,   25.1  , 53.4  , 90.5  , 84.1  , 36.9 );
                        kernels[785] = compute_kernel(x,   27.5  , 54.6  , 96.1  , 83.7  , 37.9 );
                        kernels[786] = compute_kernel(x,   28.4  , 56.0  , 97.2  , 72.4  , 37.2 );
                        kernels[787] = compute_kernel(x,   26.7  , 43.9  , 91.4  , 117.0  , 37.1 );
                        kernels[788] = compute_kernel(x,   24.7  , 51.3  , 93.6  , 114.7  , 37.3 );
                        kernels[789] = compute_kernel(x,   29.5  , 57.6  , 96.1  , 71.9  , 37.0 );
                        kernels[790] = compute_kernel(x,   27.0  , 58.4  , 93.6  , 122.3  , 37.0 );
                        kernels[791] = compute_kernel(x,   27.8  , 69.6  , 93.4  , 83.6  , 36.6 );
                        kernels[792] = compute_kernel(x,   27.5  , 44.7  , 96.1  , 86.7  , 36.6 );
                        kernels[793] = compute_kernel(x,   25.6  , 52.5  , 91.8  , 83.7  , 36.8 );
                        kernels[794] = compute_kernel(x,   29.5  , 55.2  , 95.3  , 108.3  , 37.0 );
                        kernels[795] = compute_kernel(x,   28.4  , 51.8  , 93.7  , 107.2  , 36.7 );
                        kernels[796] = compute_kernel(x,   26.1  , 65.0  , 95.8  , 105.3  , 36.7 );
                        kernels[797] = compute_kernel(x,   26.9  , 57.2  , 94.2  , 110.2  , 36.6 );
                        kernels[798] = compute_kernel(x,   29.6  , 63.8  , 99.1  , 93.6  , 36.3 );
                        kernels[799] = compute_kernel(x,   24.2  , 43.2  , 93.8  , 120.4  , 37.0 );
                        kernels[800] = compute_kernel(x,   28.2  , 53.7  , 96.7  , 105.6  , 37.0 );
                        kernels[801] = compute_kernel(x,   26.7  , 56.9  , 92.5  , 97.5  , 36.8 );
                        kernels[802] = compute_kernel(x,   28.0  , 66.2  , 97.4  , 98.2  , 36.2 );
                        kernels[803] = compute_kernel(x,   26.1  , 47.5  , 95.7  , 84.3  , 37.1 );
                        kernels[804] = compute_kernel(x,   29.9  , 41.7  , 96.4  , 90.4  , 37.0 );
                        kernels[805] = compute_kernel(x,   28.7  , 55.4  , 93.3  , 88.5  , 37.8 );
                        kernels[806] = compute_kernel(x,   29.9  , 43.5  , 96.1  , 98.5  , 37.2 );
                        kernels[807] = compute_kernel(x,   28.7  , 63.5  , 96.2  , 92.9  , 37.3 );
                        kernels[808] = compute_kernel(x,   29.8  , 44.7  , 96.9  , 98.4  , 37.2 );
                        kernels[809] = compute_kernel(x,   29.2  , 44.6  , 97.8  , 81.8  , 36.8 );
                        kernels[810] = compute_kernel(x,   27.4  , 59.5  , 98.4  , 104.3  , 37.2 );
                        kernels[811] = compute_kernel(x,   28.7  , 50.5  , 93.4  , 90.8  , 37.8 );
                        kernels[812] = compute_kernel(x,   29.6  , 45.8  , 92.3  , 107.5  , 37.6 );
                        kernels[813] = compute_kernel(x,   25.8  , 62.9  , 93.1  , 97.0  , 37.0 );
                        kernels[814] = compute_kernel(x,   26.5  , 59.4  , 99.5  , 101.8  , 37.1 );
                        kernels[815] = compute_kernel(x,   29.4  , 42.4  , 94.5  , 99.9  , 37.2 );
                        kernels[816] = compute_kernel(x,   29.2  , 41.1  , 85.8  , 124.9  , 37.5 );
                        kernels[817] = compute_kernel(x,   28.8  , 52.5  , 97.9  , 89.5  , 36.5 );
                        kernels[818] = compute_kernel(x,   24.1  , 68.4  , 92.5  , 129.8  , 37.3 );
                        kernels[819] = compute_kernel(x,   27.6  , 47.2  , 96.6  , 80.5  , 37.2 );
                        kernels[820] = compute_kernel(x,   24.5  , 65.7  , 95.8  , 106.8  , 37.0 );
                        kernels[821] = compute_kernel(x,   24.4  , 51.9  , 93.6  , 108.0  , 36.7 );
                        kernels[822] = compute_kernel(x,   26.0  , 55.2  , 95.2  , 75.2  , 37.4 );
                        kernels[823] = compute_kernel(x,   28.7  , 54.0  , 96.8  , 92.6  , 36.7 );
                        kernels[824] = compute_kernel(x,   28.1  , 68.2  , 94.1  , 91.4  , 36.2 );
                        kernels[825] = compute_kernel(x,   26.8  , 56.9  , 95.1  , 89.6  , 36.9 );
                        kernels[826] = compute_kernel(x,   26.1  , 48.1  , 96.5  , 98.3  , 36.9 );
                        kernels[827] = compute_kernel(x,   29.5  , 67.2  , 97.2  , 79.3  , 37.2 );
                        kernels[828] = compute_kernel(x,   27.0  , 42.1  , 94.0  , 99.3  , 36.9 );
                        kernels[829] = compute_kernel(x,   25.5  , 43.5  , 97.2  , 93.6  , 37.3 );
                        kernels[830] = compute_kernel(x,   25.5  , 49.0  , 87.7  , 132.1  , 36.9 );
                        kernels[831] = compute_kernel(x,   25.0  , 43.9  , 93.0  , 104.5  , 36.8 );
                        kernels[832] = compute_kernel(x,   27.2  , 65.6  , 95.7  , 100.8  , 37.4 );
                        kernels[833] = compute_kernel(x,   29.7  , 46.4  , 97.2  , 90.2  , 36.5 );
                        kernels[834] = compute_kernel(x,   24.8  , 51.0  , 94.6  , 80.0  , 37.1 );
                        kernels[835] = compute_kernel(x,   28.0  , 60.1  , 95.7  , 91.6  , 37.0 );
                        kernels[836] = compute_kernel(x,   25.1  , 58.2  , 96.1  , 98.1  , 36.3 );
                        kernels[837] = compute_kernel(x,   28.1  , 55.7  , 95.7  , 105.9  , 36.9 );
                        kernels[838] = compute_kernel(x,   29.2  , 65.6  , 95.8  , 84.7  , 37.0 );
                        kernels[839] = compute_kernel(x,   27.1  , 62.5  , 92.5  , 122.9  , 37.3 );
                        kernels[840] = compute_kernel(x,   29.6  , 41.1  , 92.8  , 131.9  , 37.3 );
                        kernels[841] = compute_kernel(x,   24.6  , 51.1  , 98.9  , 82.0  , 37.3 );
                        kernels[842] = compute_kernel(x,   27.2  , 56.2  , 100.0  , 116.1  , 37.4 );
                        kernels[843] = compute_kernel(x,   28.8  , 62.7  , 93.5  , 74.0  , 37.0 );
                        kernels[844] = compute_kernel(x,   25.6  , 49.6  , 94.9  , 88.8  , 37.0 );
                        kernels[845] = compute_kernel(x,   24.8  , 55.8  , 93.9  , 89.1  , 37.1 );
                        kernels[846] = compute_kernel(x,   27.3  , 61.3  , 93.0  , 104.1  , 36.8 );
                        kernels[847] = compute_kernel(x,   26.8  , 65.7  , 95.7  , 104.0  , 37.1 );
                        kernels[848] = compute_kernel(x,   27.2  , 44.8  , 92.9  , 104.0  , 36.9 );
                        kernels[849] = compute_kernel(x,   24.5  , 47.1  , 98.3  , 112.6  , 36.6 );
                        kernels[850] = compute_kernel(x,   28.8  , 47.0  , 96.4  , 80.4  , 36.4 );
                        kernels[851] = compute_kernel(x,   27.8  , 62.1  , 95.7  , 114.9  , 36.6 );
                        kernels[852] = compute_kernel(x,   29.5  , 50.7  , 94.1  , 97.0  , 37.1 );
                        kernels[853] = compute_kernel(x,   25.8  , 47.1  , 94.6  , 113.5  , 36.9 );
                        kernels[854] = compute_kernel(x,   28.9  , 69.3  , 93.2  , 99.6  , 37.5 );
                        kernels[855] = compute_kernel(x,   25.2  , 42.7  , 95.3  , 68.9  , 37.0 );
                        kernels[856] = compute_kernel(x,   26.9  , 67.9  , 93.2  , 128.7  , 38.0 );
                        kernels[857] = compute_kernel(x,   26.4  , 42.3  , 90.9  , 82.8  , 37.5 );
                        kernels[858] = compute_kernel(x,   24.1  , 51.5  , 96.5  , 106.7  , 37.5 );
                        kernels[859] = compute_kernel(x,   26.0  , 42.8  , 94.5  , 97.3  , 37.8 );
                        kernels[860] = compute_kernel(x,   28.4  , 59.8  , 91.8  , 71.1  , 37.6 );
                        kernels[861] = compute_kernel(x,   28.4  , 68.0  , 98.9  , 76.2  , 36.8 );
                        kernels[862] = compute_kernel(x,   28.2  , 55.1  , 96.4  , 96.3  , 37.1 );
                        kernels[863] = compute_kernel(x,   28.8  , 50.7  , 95.5  , 97.1  , 37.7 );
                        kernels[864] = compute_kernel(x,   27.9  , 68.8  , 93.3  , 126.2  , 37.5 );
                        kernels[865] = compute_kernel(x,   24.5  , 57.6  , 89.5  , 105.1  , 38.1 );
                        kernels[866] = compute_kernel(x,   26.0  , 59.4  , 95.5  , 98.5  , 36.5 );
                        kernels[867] = compute_kernel(x,   26.3  , 47.4  , 95.7  , 98.5  , 37.0 );
                        kernels[868] = compute_kernel(x,   26.2  , 55.6  , 92.1  , 85.5  , 37.0 );
                        kernels[869] = compute_kernel(x,   25.1  , 55.1  , 92.9  , 107.3  , 36.0 );
                        kernels[870] = compute_kernel(x,   27.9  , 42.6  , 94.7  , 125.0  , 37.5 );
                        kernels[871] = compute_kernel(x,   24.3  , 42.0  , 92.7  , 119.8  , 37.6 );
                        kernels[872] = compute_kernel(x,   27.9  , 66.4  , 97.4  , 93.2  , 36.8 );
                        kernels[873] = compute_kernel(x,   27.4  , 62.2  , 95.5  , 101.8  , 37.5 );
                        kernels[874] = compute_kernel(x,   27.1  , 41.6  , 94.2  , 100.0  , 37.5 );
                        kernels[875] = compute_kernel(x,   24.6  , 47.0  , 91.0  , 102.2  , 37.4 );
                        kernels[876] = compute_kernel(x,   26.3  , 63.1  , 91.6  , 107.7  , 37.5 );
                        kernels[877] = compute_kernel(x,   25.2  , 57.8  , 94.3  , 101.1  , 36.9 );
                        kernels[878] = compute_kernel(x,   27.0  , 58.3  , 98.9  , 90.1  , 37.3 );
                        kernels[879] = compute_kernel(x,   25.0  , 66.9  , 94.5  , 112.0  , 37.4 );
                        kernels[880] = compute_kernel(x,   27.2  , 43.3  , 95.4  , 104.8  , 37.0 );
                        kernels[881] = compute_kernel(x,   28.9  , 50.2  , 91.0  , 121.9  , 37.1 );
                        kernels[882] = compute_kernel(x,   28.3  , 58.4  , 100.0  , 91.3  , 37.4 );
                        kernels[883] = compute_kernel(x,   26.1  , 41.5  , 95.1  , 90.2  , 37.2 );
                        kernels[884] = compute_kernel(x,   29.0  , 50.6  , 92.9  , 106.6  , 36.7 );
                        kernels[885] = compute_kernel(x,   25.7  , 49.6  , 97.1  , 110.7  , 37.0 );
                        kernels[886] = compute_kernel(x,   27.4  , 48.5  , 93.5  , 79.1  , 36.5 );
                        kernels[887] = compute_kernel(x,   24.6  , 41.2  , 94.1  , 127.9  , 36.5 );
                        kernels[888] = compute_kernel(x,   28.8  , 50.6  , 90.5  , 115.4  , 37.5 );
                        kernels[889] = compute_kernel(x,   29.5  , 48.0  , 94.3  , 110.3  , 37.0 );
                        kernels[890] = compute_kernel(x,   24.6  , 54.4  , 97.6  , 101.7  , 37.2 );
                        kernels[891] = compute_kernel(x,   26.9  , 54.8  , 96.4  , 83.4  , 36.9 );
                        kernels[892] = compute_kernel(x,   24.5  , 42.0  , 96.9  , 78.4  , 37.0 );
                        kernels[893] = compute_kernel(x,   24.7  , 57.2  , 95.6  , 110.9  , 36.0 );
                        kernels[894] = compute_kernel(x,   30.0  , 45.3  , 96.2  , 101.4  , 37.3 );
                        kernels[895] = compute_kernel(x,   28.9  , 45.9  , 88.2  , 94.4  , 37.4 );
                        kernels[896] = compute_kernel(x,   24.3  , 52.5  , 100.0  , 98.7  , 36.3 );
                        kernels[897] = compute_kernel(x,   26.2  , 53.8  , 97.4  , 107.3  , 37.3 );
                        kernels[898] = compute_kernel(x,   28.3  , 59.5  , 95.0  , 97.6  , 37.2 );
                        kernels[899] = compute_kernel(x,   24.4  , 53.1  , 95.7  , 81.3  , 36.8 );
                        kernels[900] = compute_kernel(x,   24.3  , 47.7  , 98.6  , 108.3  , 36.8 );
                        kernels[901] = compute_kernel(x,   27.4  , 51.0  , 94.5  , 109.8  , 36.6 );
                        kernels[902] = compute_kernel(x,   27.9  , 51.2  , 96.8  , 103.7  , 37.1 );
                        kernels[903] = compute_kernel(x,   25.7  , 50.0  , 93.7  , 94.2  , 36.6 );
                        kernels[904] = compute_kernel(x,   29.5  , 60.0  , 98.7  , 77.7  , 37.0 );
                        kernels[905] = compute_kernel(x,   28.1  , 46.4  , 95.3  , 87.5  , 37.3 );
                        kernels[906] = compute_kernel(x,   25.3  , 65.0  , 94.9  , 83.9  , 36.5 );
                        kernels[907] = compute_kernel(x,   29.9  , 43.8  , 97.1  , 80.9  , 36.6 );
                        kernels[908] = compute_kernel(x,   24.2  , 40.7  , 94.2  , 108.3  , 36.6 );
                        kernels[909] = compute_kernel(x,   27.5  , 64.9  , 97.9  , 99.0  , 36.5 );
                        kernels[910] = compute_kernel(x,   26.7  , 68.4  , 93.4  , 100.4  , 37.2 );
                        kernels[911] = compute_kernel(x,   25.4  , 55.0  , 93.1  , 73.6  , 37.2 );
                        kernels[912] = compute_kernel(x,   25.7  , 40.3  , 95.8  , 105.5  , 37.1 );
                        kernels[913] = compute_kernel(x,   25.2  , 60.3  , 94.7  , 73.0  , 37.4 );
                        kernels[914] = compute_kernel(x,   27.1  , 55.7  , 94.4  , 120.8  , 37.3 );
                        kernels[915] = compute_kernel(x,   26.6  , 45.3  , 97.0  , 61.5  , 36.0 );
                        kernels[916] = compute_kernel(x,   26.9  , 45.4  , 95.3  , 103.0  , 37.0 );
                        kernels[917] = compute_kernel(x,   24.3  , 61.5  , 99.5  , 102.8  , 36.0 );
                        kernels[918] = compute_kernel(x,   26.4  , 50.7  , 94.2  , 107.6  , 37.0 );
                        kernels[919] = compute_kernel(x,   28.9  , 42.8  , 91.3  , 83.6  , 36.5 );
                        kernels[920] = compute_kernel(x,   25.6  , 42.2  , 93.4  , 107.4  , 37.0 );
                        kernels[921] = compute_kernel(x,   27.1  , 48.3  , 94.9  , 100.1  , 37.1 );
                        kernels[922] = compute_kernel(x,   28.4  , 62.9  , 94.5  , 90.6  , 37.2 );
                        kernels[923] = compute_kernel(x,   26.3  , 52.8  , 90.6  , 114.7  , 37.7 );
                        kernels[924] = compute_kernel(x,   28.2  , 64.3  , 97.3  , 102.4  , 37.7 );
                        kernels[925] = compute_kernel(x,   26.2  , 45.1  , 92.6  , 123.1  , 36.9 );
                        kernels[926] = compute_kernel(x,   24.3  , 62.2  , 96.4  , 88.2  , 36.5 );
                        kernels[927] = compute_kernel(x,   25.3  , 47.9  , 93.8  , 108.9  , 37.4 );
                        kernels[928] = compute_kernel(x,   25.9  , 61.4  , 91.0  , 91.7  , 37.9 );
                        kernels[929] = compute_kernel(x,   29.4  , 46.9  , 93.3  , 85.5  , 37.4 );
                        kernels[930] = compute_kernel(x,   28.7  , 47.6  , 98.1  , 89.5  , 36.8 );
                        kernels[931] = compute_kernel(x,   28.5  , 53.5  , 94.3  , 105.1  , 37.0 );
                        kernels[932] = compute_kernel(x,   26.8  , 49.1  , 93.2  , 107.8  , 36.9 );
                        kernels[933] = compute_kernel(x,   26.8  , 50.4  , 94.8  , 82.9  , 37.4 );
                        kernels[934] = compute_kernel(x,   28.8  , 51.6  , 98.7  , 97.2  , 36.9 );
                        kernels[935] = compute_kernel(x,   27.4  , 46.3  , 94.8  , 117.0  , 36.4 );
                        kernels[936] = compute_kernel(x,   26.6  , 49.5  , 95.0  , 94.0  , 37.3 );
                        kernels[937] = compute_kernel(x,   29.7  , 61.2  , 96.4  , 80.9  , 36.4 );
                        kernels[938] = compute_kernel(x,   27.1  , 47.7  , 94.0  , 92.8  , 37.3 );
                        kernels[939] = compute_kernel(x,   24.6  , 61.4  , 93.3  , 117.1  , 37.4 );
                        kernels[940] = compute_kernel(x,   26.9  , 68.2  , 91.3  , 82.5  , 37.2 );
                        kernels[941] = compute_kernel(x,   24.7  , 65.6  , 99.1  , 103.3  , 36.8 );
                        kernels[942] = compute_kernel(x,   28.7  , 50.9  , 97.7  , 77.8  , 36.4 );
                        kernels[943] = compute_kernel(x,   29.4  , 48.2  , 97.3  , 103.8  , 36.5 );
                        kernels[944] = compute_kernel(x,   29.0  , 46.6  , 97.9  , 98.8  , 37.0 );
                        kernels[945] = compute_kernel(x,   24.2  , 49.4  , 97.3  , 102.2  , 36.5 );
                        kernels[946] = compute_kernel(x,   28.6  , 48.2  , 94.0  , 84.2  , 36.7 );
                        kernels[947] = compute_kernel(x,   26.2  , 53.7  , 94.6  , 112.6  , 36.8 );
                        kernels[948] = compute_kernel(x,   28.3  , 65.7  , 94.0  , 101.3  , 37.1 );
                        kernels[949] = compute_kernel(x,   27.1  , 48.0  , 94.0  , 129.7  , 37.6 );
                        kernels[950] = compute_kernel(x,   28.2  , 43.0  , 93.6  , 95.4  , 37.5 );
                        kernels[951] = compute_kernel(x,   28.8  , 60.8  , 93.3  , 94.2  , 36.4 );
                        kernels[952] = compute_kernel(x,   26.1  , 51.9  , 94.3  , 111.6  , 37.3 );
                        kernels[953] = compute_kernel(x,   28.2  , 62.0  , 95.7  , 79.8  , 36.8 );
                        kernels[954] = compute_kernel(x,   29.8  , 54.6  , 94.5  , 111.1  , 37.1 );
                        kernels[955] = compute_kernel(x,   27.4  , 53.2  , 95.0  , 99.4  , 37.6 );
                        kernels[956] = compute_kernel(x,   25.7  , 58.1  , 97.1  , 98.2  , 36.7 );
                        kernels[957] = compute_kernel(x,   27.1  , 51.2  , 96.8  , 99.3  , 36.9 );
                        kernels[958] = compute_kernel(x,   26.9  , 40.7  , 96.6  , 100.7  , 37.6 );
                        kernels[959] = compute_kernel(x,   25.6  , 49.1  , 96.6  , 94.4  , 37.0 );
                        kernels[960] = compute_kernel(x,   27.9  , 52.1  , 97.6  , 96.4  , 36.4 );
                        kernels[961] = compute_kernel(x,   29.7  , 64.5  , 95.8  , 107.6  , 37.3 );
                        kernels[962] = compute_kernel(x,   26.7  , 48.7  , 97.2  , 100.3  , 36.7 );
                        kernels[963] = compute_kernel(x,   29.7  , 44.5  , 95.8  , 88.0  , 37.0 );
                        kernels[964] = compute_kernel(x,   26.4  , 47.2  , 96.8  , 99.9  , 36.5 );
                        kernels[965] = compute_kernel(x,   24.6  , 51.3  , 100.0  , 98.1  , 36.9 );
                        kernels[966] = compute_kernel(x,   28.9  , 56.5  , 92.8  , 90.0  , 37.0 );
                        kernels[967] = compute_kernel(x,   27.7  , 55.8  , 93.4  , 91.4  , 36.6 );
                        kernels[968] = compute_kernel(x,   28.7  , 40.7  , 96.2  , 100.2  , 37.6 );
                        kernels[969] = compute_kernel(x,   26.7  , 52.4  , 93.1  , 119.4  , 37.6 );
                        kernels[970] = compute_kernel(x,   25.1  , 60.9  , 97.5  , 101.3  , 36.9 );
                        kernels[971] = compute_kernel(x,   29.3  , 43.2  , 89.9  , 111.8  , 38.0 );
                        kernels[972] = compute_kernel(x,   25.5  , 52.7  , 97.3  , 110.3  , 37.6 );
                        kernels[973] = compute_kernel(x,   24.6  , 42.1  , 96.8  , 106.9  , 36.9 );
                        kernels[974] = compute_kernel(x,   29.0  , 64.9  , 99.9  , 87.7  , 36.4 );
                        kernels[975] = compute_kernel(x,   24.5  , 66.0  , 93.6  , 117.8  , 37.2 );
                        kernels[976] = compute_kernel(x,   25.0  , 63.6  , 95.7  , 113.4  , 36.6 );
                        kernels[977] = compute_kernel(x,   24.7  , 62.6  , 96.1  , 85.9  , 36.9 );
                        kernels[978] = compute_kernel(x,   27.8  , 47.0  , 97.2  , 92.4  , 37.5 );
                        kernels[979] = compute_kernel(x,   29.0  , 58.6  , 95.2  , 91.8  , 36.3 );
                        kernels[980] = compute_kernel(x,   26.7  , 57.4  , 94.9  , 113.4  , 37.6 );
                        kernels[981] = compute_kernel(x,   29.3  , 46.8  , 95.9  , 98.9  , 37.8 );
                        kernels[982] = compute_kernel(x,   25.2  , 65.6  , 91.2  , 98.2  , 36.9 );
                        kernels[983] = compute_kernel(x,   24.4  , 47.7  , 94.1  , 99.0  , 36.5 );
                        kernels[984] = compute_kernel(x,   26.3  , 69.3  , 91.9  , 101.8  , 36.1 );
                        kernels[985] = compute_kernel(x,   26.2  , 57.5  , 94.9  , 86.2  , 37.3 );
                        kernels[986] = compute_kernel(x,   28.0  , 51.4  , 93.1  , 105.7  , 37.4 );
                        kernels[987] = compute_kernel(x,   24.0  , 69.4  , 96.2  , 90.4  , 36.8 );
                        kernels[988] = compute_kernel(x,   28.6  , 63.3  , 92.2  , 92.7  , 36.8 );
                        kernels[989] = compute_kernel(x,   28.8  , 57.2  , 94.4  , 89.7  , 36.3 );
                        kernels[990] = compute_kernel(x,   24.8  , 46.8  , 94.7  , 94.6  , 36.3 );
                        kernels[991] = compute_kernel(x,   28.5  , 49.3  , 85.9  , 120.0  , 37.6 );
                        kernels[992] = compute_kernel(x,   25.1  , 43.5  , 97.6  , 71.9  , 37.2 );
                        kernels[993] = compute_kernel(x,   28.2  , 60.2  , 96.8  , 99.6  , 37.1 );
                        kernels[994] = compute_kernel(x,   25.4  , 48.4  , 91.2  , 93.9  , 36.3 );
                        kernels[995] = compute_kernel(x,   27.6  , 40.5  , 93.1  , 71.6  , 37.0 );
                        kernels[996] = compute_kernel(x,   28.3  , 60.2  , 99.9  , 96.9  , 36.9 );
                        kernels[997] = compute_kernel(x,   24.1  , 54.6  , 94.3  , 100.6  , 36.6 );
                        kernels[998] = compute_kernel(x,   28.4  , 67.2  , 90.6  , 87.3  , 37.4 );
                        kernels[999] = compute_kernel(x,   28.8  , 56.3  , 96.5  , 101.2  , 36.4 );
                        kernels[1000] = compute_kernel(x,   24.2  , 50.4  , 93.9  , 94.2  , 37.2 );
                        kernels[1001] = compute_kernel(x,   24.5  , 52.5  , 98.7  , 96.0  , 36.8 );
                        kernels[1002] = compute_kernel(x,   24.4  , 69.8  , 94.2  , 96.7  , 36.8 );
                        kernels[1003] = compute_kernel(x,   24.4  , 52.3  , 95.3  , 70.8  , 36.3 );
                        kernels[1004] = compute_kernel(x,   27.4  , 49.5  , 92.1  , 106.2  , 37.5 );
                        kernels[1005] = compute_kernel(x,   25.3  , 54.1  , 98.6  , 102.4  , 36.7 );
                        kernels[1006] = compute_kernel(x,   25.1  , 57.2  , 92.1  , 106.8  , 37.3 );
                        kernels[1007] = compute_kernel(x,   29.0  , 67.8  , 97.4  , 90.3  , 37.2 );
                        kernels[1008] = compute_kernel(x,   29.1  , 48.7  , 95.1  , 96.2  , 36.5 );
                        kernels[1009] = compute_kernel(x,   25.6  , 54.9  , 96.7  , 98.8  , 37.3 );
                        kernels[1010] = compute_kernel(x,   28.8  , 46.6  , 92.9  , 83.8  , 37.0 );
                        kernels[1011] = compute_kernel(x,   26.6  , 52.6  , 95.3  , 76.6  , 37.0 );
                        kernels[1012] = compute_kernel(x,   27.3  , 46.3  , 97.8  , 94.9  , 36.7 );
                        kernels[1013] = compute_kernel(x,   28.7  , 54.9  , 88.6  , 117.5  , 36.8 );
                        kernels[1014] = compute_kernel(x,   27.7  , 63.0  , 100.0  , 96.1  , 36.8 );
                        kernels[1015] = compute_kernel(x,   29.9  , 41.2  , 100.0  , 99.1  , 37.4 );
                        kernels[1016] = compute_kernel(x,   24.9  , 66.4  , 95.9  , 97.3  , 36.8 );
                        kernels[1017] = compute_kernel(x,   28.5  , 52.3  , 96.2  , 80.7  , 36.5 );
                        kernels[1018] = compute_kernel(x,   27.6  , 55.2  , 96.1  , 96.1  , 37.0 );
                        kernels[1019] = compute_kernel(x,   27.3  , 40.4  , 94.5  , 80.0  , 36.6 );
                        kernels[1020] = compute_kernel(x,   29.6  , 50.5  , 93.1  , 102.2  , 37.5 );
                        kernels[1021] = compute_kernel(x,   29.4  , 40.1  , 96.8  , 98.8  , 36.6 );
                        kernels[1022] = compute_kernel(x,   25.3  , 53.3  , 99.9  , 86.0  , 37.1 );
                        kernels[1023] = compute_kernel(x,   26.8  , 55.8  , 97.7  , 111.7  , 37.2 );
                        kernels[1024] = compute_kernel(x,   24.7  , 46.8  , 95.2  , 97.2  , 36.2 );
                        kernels[1025] = compute_kernel(x,   26.2  , 59.3  , 93.1  , 135.4  , 37.0 );
                        kernels[1026] = compute_kernel(x,   24.3  , 57.1  , 95.8  , 92.8  , 36.4 );
                        kernels[1027] = compute_kernel(x,   27.2  , 50.2  , 93.0  , 91.6  , 36.8 );
                        kernels[1028] = compute_kernel(x,   29.7  , 47.6  , 94.4  , 77.8  , 36.7 );
                        kernels[1029] = compute_kernel(x,   26.5  , 50.4  , 97.8  , 99.0  , 37.7 );
                        kernels[1030] = compute_kernel(x,   26.4  , 65.4  , 89.5  , 106.2  , 37.3 );
                        kernels[1031] = compute_kernel(x,   24.1  , 46.4  , 92.7  , 101.5  , 37.7 );
                        kernels[1032] = compute_kernel(x,   26.4  , 51.8  , 94.5  , 92.9  , 36.6 );
                        kernels[1033] = compute_kernel(x,   24.3  , 69.4  , 91.3  , 120.4  , 37.1 );
                        kernels[1034] = compute_kernel(x,   25.0  , 61.1  , 93.3  , 90.0  , 37.0 );
                        kernels[1035] = compute_kernel(x,   28.2  , 44.3  , 93.1  , 122.4  , 37.2 );
                        kernels[1036] = compute_kernel(x,   25.6  , 61.5  , 99.0  , 99.3  , 37.5 );
                        kernels[1037] = compute_kernel(x,   28.0  , 58.1  , 89.4  , 93.6  , 37.5 );
                        kernels[1038] = compute_kernel(x,   30.0  , 58.0  , 99.6  , 79.8  , 36.8 );
                        kernels[1039] = compute_kernel(x,   29.9  , 47.3  , 96.0  , 89.1  , 36.4 );
                        kernels[1040] = compute_kernel(x,   29.1  , 68.8  , 99.9  , 90.1  , 36.4 );
                        kernels[1041] = compute_kernel(x,   25.3  , 43.8  , 95.2  , 79.0  , 36.9 );
                        kernels[1042] = compute_kernel(x,   29.1  , 51.1  , 95.9  , 88.1  , 37.0 );
                        kernels[1043] = compute_kernel(x,   25.7  , 65.7  , 96.0  , 104.7  , 36.9 );
                        kernels[1044] = compute_kernel(x,   28.0  , 52.1  , 95.9  , 75.3  , 36.8 );
                        kernels[1045] = compute_kernel(x,   27.9  , 60.7  , 94.1  , 85.3  , 36.7 );
                        kernels[1046] = compute_kernel(x,   27.6  , 63.2  , 90.7  , 95.0  , 37.2 );
                        kernels[1047] = compute_kernel(x,   25.9  , 60.6  , 94.1  , 101.2  , 37.1 );
                        kernels[1048] = compute_kernel(x,   30.0  , 48.7  , 92.2  , 114.1  , 36.9 );
                        kernels[1049] = compute_kernel(x,   25.2  , 67.1  , 100.0  , 72.9  , 37.1 );
                        kernels[1050] = compute_kernel(x,   27.5  , 44.2  , 97.1  , 79.7  , 36.6 );
                        kernels[1051] = compute_kernel(x,   25.4  , 62.0  , 98.1  , 92.1  , 36.2 );
                        kernels[1052] = compute_kernel(x,   24.4  , 70.0  , 100.0  , 111.6  , 36.4 );
                        kernels[1053] = compute_kernel(x,   27.9  , 55.6  , 93.4  , 107.0  , 37.0 );
                        kernels[1054] = compute_kernel(x,   29.6  , 45.8  , 95.2  , 97.7  , 37.5 );
                        kernels[1055] = compute_kernel(x,   29.6  , 40.2  , 93.2  , 107.9  , 36.7 );
                        kernels[1056] = compute_kernel(x,   29.6  , 52.2  , 88.8  , 110.4  , 37.3 );
                        kernels[1057] = compute_kernel(x,   26.4  , 62.6  , 93.4  , 100.2  , 37.3 );
                        kernels[1058] = compute_kernel(x,   27.9  , 65.3  , 99.5  , 96.2  , 36.4 );
                        kernels[1059] = compute_kernel(x,   27.2  , 58.7  , 88.1  , 102.1  , 37.3 );
                        kernels[1060] = compute_kernel(x,   29.7  , 43.0  , 95.5  , 92.4  , 37.0 );
                        kernels[1061] = compute_kernel(x,   24.0  , 53.9  , 94.7  , 97.3  , 37.2 );
                        kernels[1062] = compute_kernel(x,   27.6  , 54.1  , 93.3  , 76.5  , 36.8 );
                        kernels[1063] = compute_kernel(x,   26.9  , 66.7  , 98.9  , 99.4  , 36.7 );
                        kernels[1064] = compute_kernel(x,   30.0  , 50.9  , 100.0  , 84.7  , 36.5 );
                        kernels[1065] = compute_kernel(x,   29.0  , 44.4  , 94.5  , 87.5  , 37.4 );
                        kernels[1066] = compute_kernel(x,   28.8  , 41.0  , 90.7  , 78.7  , 37.6 );
                        kernels[1067] = compute_kernel(x,   28.2  , 43.5  , 96.5  , 92.2  , 36.8 );
                        kernels[1068] = compute_kernel(x,   28.1  , 60.9  , 91.0  , 112.0  , 37.4 );
                        kernels[1069] = compute_kernel(x,   27.3  , 61.5  , 97.2  , 108.5  , 36.7 );
                        kernels[1070] = compute_kernel(x,   26.1  , 56.4  , 97.1  , 110.0  , 37.7 );
                        kernels[1071] = compute_kernel(x,   27.6  , 47.9  , 96.0  , 95.5  , 37.0 );
                        kernels[1072] = compute_kernel(x,   29.4  , 47.4  , 98.2  , 63.6  , 37.0 );
                        kernels[1073] = compute_kernel(x,   25.5  , 57.9  , 95.5  , 86.2  , 36.7 );
                        kernels[1074] = compute_kernel(x,   27.7  , 60.9  , 95.6  , 90.4  , 36.6 );
                        kernels[1075] = compute_kernel(x,   24.9  , 63.5  , 94.4  , 93.2  , 37.5 );
                        kernels[1076] = compute_kernel(x,   27.4  , 46.0  , 96.5  , 92.6  , 36.7 );
                        kernels[1077] = compute_kernel(x,   25.5  , 56.8  , 92.1  , 83.8  , 36.4 );
                        kernels[1078] = compute_kernel(x,   26.5  , 53.7  , 91.6  , 95.6  , 37.0 );
                        kernels[1079] = compute_kernel(x,   29.6  , 51.9  , 97.0  , 80.3  , 36.6 );
                        kernels[1080] = compute_kernel(x,   25.8  , 57.4  , 95.5  , 72.2  , 37.2 );
                        kernels[1081] = compute_kernel(x,   27.5  , 56.6  , 97.5  , 81.3  , 36.6 );
                        kernels[1082] = compute_kernel(x,   24.4  , 45.2  , 94.4  , 102.4  , 37.2 );
                        kernels[1083] = compute_kernel(x,   28.9  , 45.6  , 99.9  , 75.3  , 36.6 );
                        kernels[1084] = compute_kernel(x,   28.0  , 62.4  , 95.9  , 114.1  , 36.7 );
                        kernels[1085] = compute_kernel(x,   25.0  , 68.0  , 98.8  , 99.6  , 36.7 );
                        kernels[1086] = compute_kernel(x,   27.3  , 43.2  , 96.7  , 104.4  , 36.5 );
                        kernels[1087] = compute_kernel(x,   26.8  , 47.3  , 95.9  , 84.0  , 36.6 );
                        kernels[1088] = compute_kernel(x,   29.0  , 69.8  , 97.0  , 93.2  , 36.4 );
                        kernels[1089] = compute_kernel(x,   29.0  , 44.4  , 94.4  , 77.5  , 37.3 );
                        kernels[1090] = compute_kernel(x,   24.3  , 63.0  , 94.3  , 122.7  , 37.6 );
                        kernels[1091] = compute_kernel(x,   26.1  , 42.7  , 96.3  , 95.4  , 38.1 );
                        kernels[1092] = compute_kernel(x,   29.9  , 47.9  , 93.3  , 69.9  , 38.4 );
                        kernels[1093] = compute_kernel(x,   25.5  , 62.2  , 94.1  , 88.7  , 36.7 );
                        kernels[1094] = compute_kernel(x,   29.6  , 56.1  , 95.6  , 102.2  , 38.0 );
                        kernels[1095] = compute_kernel(x,   28.3  , 43.6  , 90.9  , 89.8  , 37.2 );
                        kernels[1096] = compute_kernel(x,   26.9  , 65.9  , 96.0  , 93.0  , 37.0 );
                        kernels[1097] = compute_kernel(x,   27.2  , 50.0  , 90.6  , 94.9  , 36.8 );
                        kernels[1098] = compute_kernel(x,   25.1  , 42.7  , 95.5  , 89.4  , 36.4 );
                        kernels[1099] = compute_kernel(x,   25.0  , 61.5  , 90.5  , 107.6  , 37.3 );
                        kernels[1100] = compute_kernel(x,   28.7  , 42.5  , 93.2  , 114.2  , 36.3 );
                        kernels[1101] = compute_kernel(x,   25.7  , 68.2  , 94.4  , 105.6  , 37.5 );
                        kernels[1102] = compute_kernel(x,   26.4  , 46.4  , 91.3  , 116.0  , 37.0 );
                        kernels[1103] = compute_kernel(x,   29.7  , 68.2  , 95.5  , 122.4  , 36.8 );
                        kernels[1104] = compute_kernel(x,   28.6  , 40.4  , 94.7  , 86.7  , 37.0 );
                        kernels[1105] = compute_kernel(x,   24.7  , 59.8  , 98.4  , 102.3  , 36.9 );
                        kernels[1106] = compute_kernel(x,   25.9  , 60.0  , 98.5  , 93.6  , 36.8 );
                        kernels[1107] = compute_kernel(x,   26.3  , 41.0  , 92.8  , 87.9  , 37.0 );
                        kernels[1108] = compute_kernel(x,   24.7  , 66.9  , 95.1  , 88.9  , 36.4 );
                        kernels[1109] = compute_kernel(x,   29.8  , 51.2  , 94.6  , 93.2  , 36.4 );
                        kernels[1110] = compute_kernel(x,   26.0  , 66.6  , 92.6  , 96.6  , 37.3 );
                        kernels[1111] = compute_kernel(x,   26.2  , 61.9  , 92.7  , 111.2  , 37.8 );
                        kernels[1112] = compute_kernel(x,   26.8  , 45.3  , 96.5  , 95.4  , 36.7 );
                        kernels[1113] = compute_kernel(x,   29.8  , 67.4  , 95.4  , 105.7  , 36.7 );
                        kernels[1114] = compute_kernel(x,   28.8  , 46.7  , 96.4  , 80.5  , 36.3 );
                        kernels[1115] = compute_kernel(x,   26.7  , 62.7  , 100.0  , 80.6  , 37.1 );
                        kernels[1116] = compute_kernel(x,   25.1  , 67.1  , 91.8  , 93.0  , 37.3 );
                        kernels[1117] = compute_kernel(x,   29.9  , 41.0  , 94.6  , 94.6  , 36.6 );
                        kernels[1118] = compute_kernel(x,   29.5  , 54.2  , 92.1  , 118.8  , 36.9 );
                        kernels[1119] = compute_kernel(x,   26.9  , 52.6  , 94.8  , 142.2  , 36.8 );
                        kernels[1120] = compute_kernel(x,   26.6  , 47.3  , 98.8  , 103.9  , 37.4 );
                        kernels[1121] = compute_kernel(x,   29.0  , 62.9  , 94.7  , 121.8  , 37.0 );
                        kernels[1122] = compute_kernel(x,   24.4  , 54.1  , 93.1  , 96.2  , 37.3 );
                        decisions[0] = -64.595005920878
                        + kernels[0] * 10.0
                        + kernels[1] * 10.0
                        + kernels[2] * 10.0
                        + kernels[3] * 10.0
                        + kernels[4] * 10.0
                        + kernels[5] * 10.0
                        + kernels[9] * 10.0
                        + kernels[13] * 10.0
                        + kernels[15] * 10.0
                        + kernels[18] * 10.0
                        + kernels[25] * 10.0
                        + kernels[27] * 10.0
                        + kernels[29] * 10.0
                        + kernels[30] * 10.0
                        + kernels[31] * 10.0
                        + kernels[32] * 10.0
                        + kernels[34] * 10.0
                        + kernels[35] * 10.0
                        + kernels[37] * 10.0
                        + kernels[38] * 10.0
                        + kernels[39] * 10.0
                        + kernels[41] * 10.0
                        + kernels[47] * 10.0
                        + kernels[49] * 10.0
                        + kernels[54] * 10.0
                        + kernels[55] * 10.0
                        + kernels[58] * 10.0
                        + kernels[59] * 10.0
                        + kernels[60] * 10.0
                        + kernels[61] * 10.0
                        + kernels[65] * 10.0
                        + kernels[66] * 10.0
                        + kernels[68] * 10.0
                        + kernels[72] * 10.0
                        + kernels[73] * 10.0
                        + kernels[75] * 10.0
                        + kernels[78] * 10.0
                        + kernels[79] * 10.0
                        + kernels[80] * 10.0
                        + kernels[82] * 10.0
                        + kernels[84] * 10.0
                        + kernels[85] * 10.0
                        + kernels[88] * 10.0
                        + kernels[89] * 10.0
                        + kernels[93] * 10.0
                        + kernels[97] * 10.0
                        + kernels[101] * 10.0
                        + kernels[104] * 4.49282406237
                        + kernels[105] * 10.0
                        + kernels[106] * 10.0
                        + kernels[109] * 10.0
                        + kernels[111] * 10.0
                        + kernels[113] * 10.0
                        + kernels[117] * 10.0
                        + kernels[118] * 10.0
                        + kernels[119] * 10.0
                        + kernels[122] * 10.0
                        + kernels[123] * 10.0
                        + kernels[124] * 10.0
                        + kernels[128] * 10.0
                        + kernels[129] * 10.0
                        + kernels[131] * 1.370395455997
                        + kernels[134] * 10.0
                        + kernels[135] * 10.0
                        + kernels[136] * 10.0
                        + kernels[137] * 10.0
                        + kernels[141] * 10.0
                        + kernels[143] * 10.0
                        + kernels[144] * 10.0
                        + kernels[149] * 10.0
                        + kernels[150] * 10.0
                        + kernels[151] * 10.0
                        + kernels[153] * 10.0
                        + kernels[154] * 10.0
                        + kernels[155] * 10.0
                        + kernels[160] * 10.0
                        + kernels[162] * 10.0
                        + kernels[164] * 10.0
                        + kernels[167] * 10.0
                        + kernels[170] * 10.0
                        + kernels[171] * 10.0
                        + kernels[172] * 2.028721338238
                        + kernels[174] * 10.0
                        + kernels[175] * 10.0
                        + kernels[180] * 10.0
                        + kernels[181] * 10.0
                        + kernels[183] * 10.0
                        + kernels[186] * 10.0
                        + kernels[188] * 10.0
                        + kernels[189] * 10.0
                        + kernels[191] * 10.0
                        + kernels[192] * 10.0
                        + kernels[194] * 10.0
                        + kernels[195] * 10.0
                        + kernels[199] * 10.0
                        + kernels[200] * 10.0
                        + kernels[201] * 10.0
                        + kernels[202] * 10.0
                        + kernels[204] * 10.0
                        + kernels[206] * 10.0
                        + kernels[209] * 10.0
                        + kernels[212] * 10.0
                        + kernels[214] * 10.0
                        + kernels[215] * 10.0
                        + kernels[219] * 10.0
                        + kernels[223] * 10.0
                        + kernels[224] * 10.0
                        + kernels[227] * 10.0
                        + kernels[228] * 10.0
                        + kernels[229] * 10.0
                        + kernels[231] * 10.0
                        + kernels[233] * 10.0
                        + kernels[234] * 10.0
                        + kernels[237] * 10.0
                        + kernels[241] * 10.0
                        + kernels[244] * 2.088355686387
                        + kernels[245] * 10.0
                        + kernels[248] * 10.0
                        + kernels[249] * 10.0
                        + kernels[252] * 10.0
                        + kernels[257] * 10.0
                        + kernels[259] * 10.0
                        + kernels[260] * 10.0
                        + kernels[261] * 10.0
                        + kernels[262] * 10.0
                        + kernels[265] * 10.0
                        + kernels[269] * 10.0
                        + kernels[270] * 10.0
                        + kernels[272] * 10.0
                        + kernels[275] * 10.0
                        + kernels[277] * 10.0
                        + kernels[279] * 10.0
                        + kernels[283] * 10.0
                        + kernels[285] * 10.0
                        + kernels[287] * 10.0
                        + kernels[294] * 10.0
                        + kernels[296] * 10.0
                        + kernels[298] * 10.0
                        + kernels[299] * 10.0
                        + kernels[301] * 10.0
                        + kernels[302] * 10.0
                        + kernels[304] * 10.0
                        + kernels[305] * 10.0
                        + kernels[306] * 10.0
                        + kernels[307] * 10.0
                        + kernels[308] * 10.0
                        + kernels[309] * 10.0
                        + kernels[311] * 10.0
                        + kernels[314] * 10.0
                        + kernels[316] * 10.0
                        + kernels[317] * 10.0
                        + kernels[320] * 10.0
                        + kernels[322] * 10.0
                        + kernels[323] * 10.0
                        + kernels[325] * 10.0
                        + kernels[326] * 9.119058217538
                        + kernels[327] * 10.0
                        + kernels[328] * 10.0
                        + kernels[329] * 10.0
                        + kernels[331] * 10.0
                        + kernels[334] * 10.0
                        + kernels[337] * 10.0
                        + kernels[338] * 10.0
                        + kernels[340] * 10.0
                        + kernels[346] * 10.0
                        + kernels[347] * 10.0
                        + kernels[348] * 10.0
                        + kernels[349] * 10.0
                        + kernels[350] * 10.0
                        + kernels[352] * 10.0
                        + kernels[356] * 10.0
                        + kernels[359] * 10.0
                        + kernels[361] * 10.0
                        + kernels[362] * 10.0
                        + kernels[363] * 10.0
                        + kernels[365] * 10.0
                        + kernels[367] * 10.0
                        + kernels[369] * 10.0
                        + kernels[370] * 10.0
                        + kernels[371] * 10.0
                        + kernels[374] * 10.0
                        + kernels[376] * 10.0
                        + kernels[378] * 10.0
                        + kernels[384] * 10.0
                        + kernels[388] * 10.0
                        + kernels[389] * 10.0
                        + kernels[391] * 10.0
                        + kernels[393] * 10.0
                        + kernels[396] * 10.0
                        + kernels[398] * 10.0
                        + kernels[401] * 10.0
                        + kernels[407] * 10.0
                        + kernels[409] * 10.0
                        + kernels[410] * 10.0
                        + kernels[412] * 10.0
                        + kernels[413] * 10.0
                        + kernels[416] * 10.0
                        + kernels[417] * 10.0
                        + kernels[418] * 10.0
                        + kernels[421] * 10.0
                        + kernels[426] * 10.0
                        + kernels[429] * 10.0
                        + kernels[433] * -10.0
                        + kernels[434] * -10.0
                        + kernels[435] * -10.0
                        + kernels[436] * -10.0
                        + kernels[438] * -10.0
                        + kernels[439] * -10.0
                        + kernels[442] * -10.0
                        + kernels[444] * -10.0
                        + kernels[445] * -10.0
                        + kernels[446] * -10.0
                        + kernels[447] * -10.0
                        + kernels[449] * -10.0
                        + kernels[450] * -10.0
                        + kernels[451] * -1.246347018758
                        + kernels[452] * -10.0
                        + kernels[453] * -10.0
                        + kernels[454] * -10.0
                        + kernels[455] * -10.0
                        + kernels[456] * -10.0
                        + kernels[457] * -10.0
                        + kernels[458] * -10.0
                        + kernels[462] * -10.0
                        + kernels[463] * -10.0
                        + kernels[465] * -10.0
                        + kernels[466] * -10.0
                        + kernels[467] * -10.0
                        + kernels[468] * -10.0
                        + kernels[469] * -10.0
                        + kernels[470] * -10.0
                        + kernels[472] * -10.0
                        + kernels[475] * -10.0
                        + kernels[476] * -10.0
                        + kernels[477] * -10.0
                        + kernels[479] * -10.0
                        + kernels[481] * -10.0
                        + kernels[482] * -10.0
                        + kernels[483] * -10.0
                        + kernels[484] * -10.0
                        + kernels[485] * -10.0
                        + kernels[487] * -10.0
                        + kernels[488] * -10.0
                        + kernels[489] * -10.0
                        + kernels[490] * -10.0
                        + kernels[491] * -10.0
                        + kernels[493] * -10.0
                        + kernels[494] * -10.0
                        + kernels[495] * -10.0
                        + kernels[497] * -10.0
                        + kernels[498] * -10.0
                        + kernels[499] * -10.0
                        + kernels[501] * -10.0
                        + kernels[503] * -10.0
                        + kernels[504] * -10.0
                        + kernels[505] * -10.0
                        + kernels[506] * -10.0
                        + kernels[507] * -10.0
                        + kernels[508] * -10.0
                        + kernels[510] * -10.0
                        + kernels[511] * -10.0
                        + kernels[512] * -10.0
                        + kernels[513] * -10.0
                        + kernels[514] * -10.0
                        + kernels[515] * -10.0
                        + kernels[517] * -10.0
                        + kernels[519] * -10.0
                        + kernels[523] * -10.0
                        + kernels[524] * -10.0
                        + kernels[525] * -10.0
                        + kernels[527] * -10.0
                        + kernels[529] * -10.0
                        + kernels[531] * -10.0
                        + kernels[532] * -10.0
                        + kernels[533] * -10.0
                        + kernels[535] * -10.0
                        + kernels[536] * -10.0
                        + kernels[537] * -10.0
                        + kernels[538] * -10.0
                        + kernels[541] * -10.0
                        + kernels[542] * -10.0
                        + kernels[543] * -10.0
                        + kernels[544] * -10.0
                        + kernels[545] * -10.0
                        + kernels[546] * -10.0
                        + kernels[547] * -10.0
                        + kernels[548] * -10.0
                        + kernels[549] * -10.0
                        + kernels[550] * -10.0
                        + kernels[551] * -10.0
                        + kernels[552] * -10.0
                        + kernels[553] * -10.0
                        + kernels[554] * -10.0
                        + kernels[555] * -10.0
                        + kernels[556] * -10.0
                        + kernels[557] * -10.0
                        + kernels[558] * -10.0
                        + kernels[560] * -10.0
                        + kernels[561] * -10.0
                        + kernels[562] * -10.0
                        + kernels[563] * -10.0
                        + kernels[564] * -10.0
                        + kernels[567] * -10.0
                        + kernels[570] * -10.0
                        + kernels[572] * -10.0
                        + kernels[573] * -10.0
                        + kernels[576] * -10.0
                        + kernels[578] * -10.0
                        + kernels[580] * -10.0
                        + kernels[581] * -10.0
                        + kernels[582] * -10.0
                        + kernels[584] * -10.0
                        + kernels[585] * -10.0
                        + kernels[586] * -10.0
                        + kernels[587] * -10.0
                        + kernels[588] * -10.0
                        + kernels[590] * -10.0
                        + kernels[591] * -10.0
                        + kernels[592] * -10.0
                        + kernels[594] * -10.0
                        + kernels[595] * -10.0
                        + kernels[596] * -10.0
                        + kernels[597] * -10.0
                        + kernels[598] * -10.0
                        + kernels[599] * -10.0
                        + kernels[600] * -10.0
                        + kernels[602] * -10.0
                        + kernels[603] * -10.0
                        + kernels[605] * -10.0
                        + kernels[606] * -10.0
                        + kernels[607] * -10.0
                        + kernels[608] * -10.0
                        + kernels[609] * -10.0
                        + kernels[611] * -10.0
                        + kernels[612] * -10.0
                        + kernels[614] * -10.0
                        + kernels[615] * -10.0
                        + kernels[616] * -10.0
                        + kernels[617] * -10.0
                        + kernels[619] * -10.0
                        + kernels[621] * -10.0
                        + kernels[622] * -10.0
                        + kernels[625] * -10.0
                        + kernels[627] * -10.0
                        + kernels[628] * -10.0
                        + kernels[632] * -10.0
                        + kernels[633] * -10.0
                        + kernels[634] * -10.0
                        + kernels[635] * -10.0
                        + kernels[636] * -10.0
                        + kernels[637] * -10.0
                        + kernels[639] * -10.0
                        + kernels[640] * -10.0
                        + kernels[641] * -10.0
                        + kernels[642] * -10.0
                        + kernels[643] * -10.0
                        + kernels[644] * -10.0
                        + kernels[646] * -10.0
                        + kernels[649] * -10.0
                        + kernels[650] * -10.0
                        + kernels[651] * -10.0
                        + kernels[652] * -10.0
                        + kernels[653] * -10.0
                        + kernels[654] * -10.0
                        + kernels[655] * -10.0
                        + kernels[657] * -10.0
                        + kernels[658] * -10.0
                        + kernels[659] * -10.0
                        + kernels[660] * -10.0
                        + kernels[661] * -10.0
                        + kernels[663] * -10.0
                        + kernels[664] * -10.0
                        + kernels[667] * -10.0
                        + kernels[669] * -10.0
                        + kernels[670] * -10.0
                        + kernels[671] * -10.0
                        + kernels[672] * -10.0
                        + kernels[673] * -10.0
                        + kernels[674] * -10.0
                        + kernels[675] * -10.0
                        + kernels[676] * -10.0
                        + kernels[677] * -10.0
                        + kernels[678] * -10.0
                        + kernels[679] * -10.0
                        + kernels[680] * -10.0
                        + kernels[682] * -10.0
                        + kernels[683] * -10.0
                        + kernels[685] * -10.0
                        + kernels[686] * -10.0
                        + kernels[688] * -10.0
                        + kernels[689] * -10.0
                        + kernels[690] * -10.0
                        + kernels[691] * -7.853007741771
                        + kernels[692] * -10.0
                        + kernels[695] * -10.0
                        + kernels[696] * -10.0
                        + kernels[700] * -10.0
                        + kernels[701] * -10.0
                        + kernels[702] * -10.0
                        + kernels[703] * -10.0
                        + kernels[704] * -10.0
                        + kernels[705] * -10.0
                        ;
                        decisions[1] = -30.682516878493
                        + kernels[1] * 10.0
                        + kernels[4] * 10.0
                        + kernels[6] * 10.0
                        + kernels[7] * 10.0
                        + kernels[8] * 10.0
                        + kernels[10] * 10.0
                        + kernels[11] * 10.0
                        + kernels[12] * 10.0
                        + kernels[13] * 10.0
                        + kernels[14] * 10.0
                        + kernels[16] * 10.0
                        + kernels[17] * 10.0
                        + kernels[19] * 10.0
                        + kernels[20] * 10.0
                        + kernels[21] * 10.0
                        + kernels[22] * 10.0
                        + kernels[23] * 10.0
                        + kernels[24] * 10.0
                        + kernels[26] * 10.0
                        + kernels[28] * 10.0
                        + kernels[29] * 10.0
                        + kernels[33] * 10.0
                        + kernels[35] * 10.0
                        + kernels[36] * 10.0
                        + kernels[37] * 10.0
                        + kernels[40] * 10.0
                        + kernels[42] * 10.0
                        + kernels[43] * 10.0
                        + kernels[44] * 10.0
                        + kernels[45] * 10.0
                        + kernels[46] * 10.0
                        + kernels[47] * 10.0
                        + kernels[48] * 10.0
                        + kernels[50] * 10.0
                        + kernels[51] * 10.0
                        + kernels[52] * 10.0
                        + kernels[53] * 10.0
                        + kernels[56] * 10.0
                        + kernels[57] * 10.0
                        + kernels[58] * 10.0
                        + kernels[59] * 10.0
                        + kernels[61] * 10.0
                        + kernels[62] * 10.0
                        + kernels[63] * 10.0
                        + kernels[64] * 4.407851322661
                        + kernels[66] * 10.0
                        + kernels[67] * 10.0
                        + kernels[68] * 10.0
                        + kernels[69] * 10.0
                        + kernels[70] * 10.0
                        + kernels[71] * 10.0
                        + kernels[72] * 10.0
                        + kernels[74] * 10.0
                        + kernels[76] * 10.0
                        + kernels[77] * 10.0
                        + kernels[79] * 10.0
                        + kernels[80] * 10.0
                        + kernels[81] * 10.0
                        + kernels[82] * 10.0
                        + kernels[83] * 10.0
                        + kernels[84] * 10.0
                        + kernels[86] * 10.0
                        + kernels[87] * 10.0
                        + kernels[90] * 10.0
                        + kernels[91] * 10.0
                        + kernels[92] * 10.0
                        + kernels[93] * 10.0
                        + kernels[94] * 10.0
                        + kernels[95] * 10.0
                        + kernels[96] * 10.0
                        + kernels[97] * 10.0
                        + kernels[98] * 10.0
                        + kernels[99] * 10.0
                        + kernels[100] * 10.0
                        + kernels[101] * 10.0
                        + kernels[102] * 10.0
                        + kernels[103] * 10.0
                        + kernels[106] * 10.0
                        + kernels[107] * 10.0
                        + kernels[108] * 10.0
                        + kernels[109] * 10.0
                        + kernels[110] * 10.0
                        + kernels[111] * 10.0
                        + kernels[112] * 10.0
                        + kernels[113] * 10.0
                        + kernels[114] * 10.0
                        + kernels[115] * 10.0
                        + kernels[116] * 10.0
                        + kernels[117] * 10.0
                        + kernels[118] * 10.0
                        + kernels[120] * 5.202402820878
                        + kernels[121] * 10.0
                        + kernels[123] * 10.0
                        + kernels[124] * 10.0
                        + kernels[125] * 10.0
                        + kernels[126] * 10.0
                        + kernels[127] * 10.0
                        + kernels[129] * 10.0
                        + kernels[130] * 10.0
                        + kernels[131] * 10.0
                        + kernels[132] * 10.0
                        + kernels[133] * 10.0
                        + kernels[138] * 10.0
                        + kernels[139] * 10.0
                        + kernels[140] * 10.0
                        + kernels[142] * 10.0
                        + kernels[143] * 10.0
                        + kernels[145] * 10.0
                        + kernels[146] * 10.0
                        + kernels[147] * 2.443607606666
                        + kernels[148] * 10.0
                        + kernels[149] * 10.0
                        + kernels[150] * 10.0
                        + kernels[152] * 10.0
                        + kernels[156] * 10.0
                        + kernels[157] * 10.0
                        + kernels[158] * 10.0
                        + kernels[159] * 10.0
                        + kernels[161] * 10.0
                        + kernels[163] * 10.0
                        + kernels[165] * 10.0
                        + kernels[166] * 10.0
                        + kernels[167] * 10.0
                        + kernels[168] * 10.0
                        + kernels[169] * 10.0
                        + kernels[171] * 10.0
                        + kernels[173] * 10.0
                        + kernels[176] * 10.0
                        + kernels[177] * 10.0
                        + kernels[178] * 10.0
                        + kernels[179] * 10.0
                        + kernels[182] * 10.0
                        + kernels[184] * 10.0
                        + kernels[185] * 10.0
                        + kernels[186] * 10.0
                        + kernels[187] * 10.0
                        + kernels[190] * 10.0
                        + kernels[193] * 10.0
                        + kernels[195] * 10.0
                        + kernels[196] * 10.0
                        + kernels[197] * 10.0
                        + kernels[198] * 10.0
                        + kernels[199] * 10.0
                        + kernels[201] * 10.0
                        + kernels[202] * 10.0
                        + kernels[203] * 10.0
                        + kernels[205] * 10.0
                        + kernels[207] * 10.0
                        + kernels[208] * 10.0
                        + kernels[210] * 10.0
                        + kernels[211] * 10.0
                        + kernels[212] * 10.0
                        + kernels[213] * 10.0
                        + kernels[215] * 10.0
                        + kernels[216] * 10.0
                        + kernels[217] * 10.0
                        + kernels[218] * 10.0
                        + kernels[220] * 10.0
                        + kernels[221] * 10.0
                        + kernels[222] * 10.0
                        + kernels[223] * 10.0
                        + kernels[225] * 10.0
                        + kernels[226] * 10.0
                        + kernels[227] * 10.0
                        + kernels[228] * 10.0
                        + kernels[230] * 10.0
                        + kernels[232] * 10.0
                        + kernels[234] * 10.0
                        + kernels[235] * 10.0
                        + kernels[236] * 10.0
                        + kernels[238] * 10.0
                        + kernels[239] * 10.0
                        + kernels[240] * 10.0
                        + kernels[241] * 10.0
                        + kernels[242] * 10.0
                        + kernels[243] * 10.0
                        + kernels[246] * 10.0
                        + kernels[247] * 10.0
                        + kernels[250] * 10.0
                        + kernels[251] * 10.0
                        + kernels[253] * 10.0
                        + kernels[254] * 10.0
                        + kernels[255] * 10.0
                        + kernels[256] * 10.0
                        + kernels[258] * 10.0
                        + kernels[259] * 10.0
                        + kernels[260] * 10.0
                        + kernels[263] * 10.0
                        + kernels[264] * 10.0
                        + kernels[266] * 10.0
                        + kernels[267] * 10.0
                        + kernels[268] * 10.0
                        + kernels[269] * 10.0
                        + kernels[271] * 10.0
                        + kernels[272] * 10.0
                        + kernels[273] * 10.0
                        + kernels[274] * 10.0
                        + kernels[276] * 10.0
                        + kernels[278] * 10.0
                        + kernels[280] * 10.0
                        + kernels[281] * 10.0
                        + kernels[282] * 10.0
                        + kernels[283] * 10.0
                        + kernels[284] * 10.0
                        + kernels[285] * 10.0
                        + kernels[286] * 10.0
                        + kernels[288] * 10.0
                        + kernels[289] * 10.0
                        + kernels[290] * 10.0
                        + kernels[291] * 10.0
                        + kernels[292] * 10.0
                        + kernels[293] * 10.0
                        + kernels[294] * 10.0
                        + kernels[295] * 10.0
                        + kernels[297] * 10.0
                        + kernels[298] * 10.0
                        + kernels[299] * 10.0
                        + kernels[300] * 10.0
                        + kernels[303] * 10.0
                        + kernels[309] * 10.0
                        + kernels[310] * 10.0
                        + kernels[312] * 10.0
                        + kernels[313] * 10.0
                        + kernels[315] * 10.0
                        + kernels[318] * 10.0
                        + kernels[319] * 10.0
                        + kernels[321] * 10.0
                        + kernels[322] * 10.0
                        + kernels[324] * 10.0
                        + kernels[326] * 10.0
                        + kernels[328] * 10.0
                        + kernels[329] * 10.0
                        + kernels[330] * 10.0
                        + kernels[332] * 10.0
                        + kernels[333] * 10.0
                        + kernels[334] * 10.0
                        + kernels[335] * 10.0
                        + kernels[336] * 10.0
                        + kernels[337] * 10.0
                        + kernels[338] * 10.0
                        + kernels[339] * 10.0
                        + kernels[341] * 10.0
                        + kernels[342] * 10.0
                        + kernels[343] * 10.0
                        + kernels[344] * 10.0
                        + kernels[345] * 10.0
                        + kernels[346] * 10.0
                        + kernels[348] * 10.0
                        + kernels[351] * 10.0
                        + kernels[352] * 10.0
                        + kernels[353] * 10.0
                        + kernels[354] * 10.0
                        + kernels[355] * 10.0
                        + kernels[357] * 10.0
                        + kernels[358] * 10.0
                        + kernels[360] * 10.0
                        + kernels[363] * 10.0
                        + kernels[364] * 10.0
                        + kernels[366] * 10.0
                        + kernels[368] * 10.0
                        + kernels[369] * 10.0
                        + kernels[370] * 10.0
                        + kernels[372] * 10.0
                        + kernels[373] * 10.0
                        + kernels[375] * 10.0
                        + kernels[377] * 10.0
                        + kernels[379] * 10.0
                        + kernels[380] * 10.0
                        + kernels[381] * 10.0
                        + kernels[382] * 10.0
                        + kernels[383] * 10.0
                        + kernels[384] * 10.0
                        + kernels[385] * 10.0
                        + kernels[386] * 10.0
                        + kernels[387] * 10.0
                        + kernels[388] * 10.0
                        + kernels[390] * 10.0
                        + kernels[392] * 10.0
                        + kernels[394] * 10.0
                        + kernels[395] * 10.0
                        + kernels[397] * 10.0
                        + kernels[399] * 10.0
                        + kernels[400] * 10.0
                        + kernels[401] * 10.0
                        + kernels[402] * 10.0
                        + kernels[403] * 10.0
                        + kernels[404] * 10.0
                        + kernels[405] * 10.0
                        + kernels[406] * 10.0
                        + kernels[408] * 10.0
                        + kernels[410] * 10.0
                        + kernels[411] * 10.0
                        + kernels[413] * 10.0
                        + kernels[414] * 10.0
                        + kernels[415] * 10.0
                        + kernels[418] * 10.0
                        + kernels[419] * 10.0
                        + kernels[420] * 10.0
                        + kernels[422] * 10.0
                        + kernels[423] * 10.0
                        + kernels[424] * 10.0
                        + kernels[425] * 10.0
                        + kernels[427] * 10.0
                        + kernels[428] * 10.0
                        + kernels[430] * 10.0
                        + kernels[431] * 10.0
                        + kernels[432] * 10.0
                        + kernels[707] * -10.0
                        + kernels[710] * -10.0
                        + kernels[712] * -10.0
                        + kernels[714] * -10.0
                        + kernels[716] * -10.0
                        + kernels[717] * -10.0
                        + kernels[718] * -10.0
                        + kernels[720] * -1.205264722335
                        + kernels[721] * -10.0
                        + kernels[722] * -10.0
                        + kernels[723] * -10.0
                        + kernels[724] * -10.0
                        + kernels[725] * -10.0
                        + kernels[726] * -10.0
                        + kernels[727] * -10.0
                        + kernels[728] * -10.0
                        + kernels[729] * -10.0
                        + kernels[731] * -10.0
                        + kernels[734] * -10.0
                        + kernels[735] * -10.0
                        + kernels[738] * -10.0
                        + kernels[739] * -10.0
                        + kernels[740] * -10.0
                        + kernels[741] * -10.0
                        + kernels[742] * -10.0
                        + kernels[744] * -10.0
                        + kernels[745] * -10.0
                        + kernels[746] * -10.0
                        + kernels[748] * -10.0
                        + kernels[752] * -10.0
                        + kernels[753] * -10.0
                        + kernels[754] * -10.0
                        + kernels[755] * -10.0
                        + kernels[757] * -10.0
                        + kernels[758] * -10.0
                        + kernels[759] * -10.0
                        + kernels[760] * -10.0
                        + kernels[761] * -10.0
                        + kernels[762] * -10.0
                        + kernels[763] * -10.0
                        + kernels[764] * -10.0
                        + kernels[765] * -10.0
                        + kernels[766] * -10.0
                        + kernels[767] * -10.0
                        + kernels[768] * -10.0
                        + kernels[769] * -10.0
                        + kernels[770] * -10.0
                        + kernels[772] * -10.0
                        + kernels[773] * -10.0
                        + kernels[775] * -10.0
                        + kernels[777] * -10.0
                        + kernels[778] * -10.0
                        + kernels[779] * -10.0
                        + kernels[780] * -10.0
                        + kernels[781] * -10.0
                        + kernels[782] * -10.0
                        + kernels[783] * -10.0
                        + kernels[784] * -10.0
                        + kernels[785] * -10.0
                        + kernels[786] * -10.0
                        + kernels[789] * -10.0
                        + kernels[791] * -10.0
                        + kernels[792] * -10.0
                        + kernels[793] * -10.0
                        + kernels[796] * -10.0
                        + kernels[798] * -10.0
                        + kernels[800] * -10.0
                        + kernels[801] * -10.0
                        + kernels[802] * -10.0
                        + kernels[803] * -10.0
                        + kernels[804] * -10.0
                        + kernels[805] * -10.0
                        + kernels[806] * -10.0
                        + kernels[807] * -10.0
                        + kernels[808] * -10.0
                        + kernels[809] * -10.0
                        + kernels[810] * -10.0
                        + kernels[811] * -10.0
                        + kernels[813] * -10.0
                        + kernels[814] * -10.0
                        + kernels[815] * -10.0
                        + kernels[817] * -10.0
                        + kernels[819] * -10.0
                        + kernels[820] * -10.0
                        + kernels[822] * -10.0
                        + kernels[823] * -10.0
                        + kernels[824] * -10.0
                        + kernels[825] * -10.0
                        + kernels[826] * -10.0
                        + kernels[827] * -10.0
                        + kernels[828] * -10.0
                        + kernels[829] * -10.0
                        + kernels[832] * -10.0
                        + kernels[833] * -10.0
                        + kernels[834] * -10.0
                        + kernels[835] * -10.0
                        + kernels[836] * -10.0
                        + kernels[838] * -10.0
                        + kernels[841] * -10.0
                        + kernels[842] * -10.0
                        + kernels[843] * -10.0
                        + kernels[844] * -10.0
                        + kernels[845] * -10.0
                        + kernels[847] * -10.0
                        + kernels[849] * -10.0
                        + kernels[850] * -10.0
                        + kernels[852] * -10.0
                        + kernels[854] * -10.0
                        + kernels[855] * -10.0
                        + kernels[857] * -10.0
                        + kernels[858] * -10.0
                        + kernels[859] * -10.0
                        + kernels[860] * -10.0
                        + kernels[861] * -10.0
                        + kernels[862] * -10.0
                        + kernels[863] * -10.0
                        + kernels[866] * -10.0
                        + kernels[867] * -10.0
                        + kernels[868] * -10.0
                        + kernels[872] * -10.0
                        + kernels[873] * -10.0
                        + kernels[874] * -10.0
                        + kernels[877] * -10.0
                        + kernels[878] * -10.0
                        + kernels[880] * -10.0
                        + kernels[882] * -10.0
                        + kernels[883] * -10.0
                        + kernels[885] * -5.900600785625
                        + kernels[886] * -10.0
                        + kernels[890] * -10.0
                        + kernels[891] * -10.0
                        + kernels[892] * -10.0
                        + kernels[894] * -10.0
                        + kernels[896] * -10.0
                        + kernels[897] * -10.0
                        + kernels[898] * -10.0
                        + kernels[899] * -10.0
                        + kernels[900] * -10.0
                        + kernels[902] * -10.0
                        + kernels[903] * -10.0
                        + kernels[904] * -10.0
                        + kernels[905] * -10.0
                        + kernels[906] * -10.0
                        + kernels[907] * -10.0
                        + kernels[909] * -10.0
                        + kernels[910] * -10.0
                        + kernels[911] * -10.0
                        + kernels[912] * -10.0
                        + kernels[913] * -10.0
                        + kernels[915] * -10.0
                        + kernels[916] * -10.0
                        + kernels[917] * -10.0
                        + kernels[919] * -10.0
                        + kernels[921] * -10.0
                        + kernels[922] * -10.0
                        + kernels[924] * -10.0
                        + kernels[926] * -10.0
                        + kernels[928] * -10.0
                        + kernels[929] * -10.0
                        + kernels[930] * -10.0
                        + kernels[933] * -10.0
                        + kernels[934] * -10.0
                        + kernels[936] * -10.0
                        + kernels[937] * -10.0
                        + kernels[938] * -10.0
                        + kernels[940] * -10.0
                        + kernels[941] * -10.0
                        + kernels[942] * -10.0
                        + kernels[943] * -10.0
                        + kernels[944] * -10.0
                        + kernels[945] * -10.0
                        + kernels[946] * -10.0
                        + kernels[948] * -10.0
                        + kernels[950] * -10.0
                        + kernels[951] * -10.0
                        + kernels[953] * -10.0
                        + kernels[955] * -10.0
                        + kernels[956] * -10.0
                        + kernels[957] * -10.0
                        + kernels[958] * -10.0
                        + kernels[959] * -10.0
                        + kernels[960] * -10.0
                        + kernels[961] * -10.0
                        + kernels[962] * -10.0
                        + kernels[963] * -10.0
                        + kernels[964] * -10.0
                        + kernels[965] * -10.0
                        + kernels[966] * -10.0
                        + kernels[967] * -10.0
                        + kernels[968] * -10.0
                        + kernels[970] * -10.0
                        + kernels[972] * -10.0
                        + kernels[973] * -10.0
                        + kernels[974] * -10.0
                        + kernels[977] * -10.0
                        + kernels[978] * -10.0
                        + kernels[979] * -10.0
                        + kernels[981] * -10.0
                        + kernels[983] * -10.0
                        + kernels[985] * -10.0
                        + kernels[987] * -10.0
                        + kernels[988] * -10.0
                        + kernels[989] * -10.0
                        + kernels[990] * -10.0
                        + kernels[992] * -10.0
                        + kernels[993] * -10.0
                        + kernels[995] * -10.0
                        + kernels[996] * -10.0
                        + kernels[997] * -10.0
                        + kernels[998] * -10.0
                        + kernels[999] * -10.0
                        + kernels[1000] * -10.0
                        + kernels[1001] * -10.0
                        + kernels[1002] * -10.0
                        + kernels[1003] * -10.0
                        + kernels[1005] * -10.0
                        + kernels[1007] * -10.0
                        + kernels[1008] * -10.0
                        + kernels[1009] * -10.0
                        + kernels[1010] * -10.0
                        + kernels[1011] * -10.0
                        + kernels[1012] * -10.0
                        + kernels[1014] * -10.0
                        + kernels[1015] * -10.0
                        + kernels[1016] * -10.0
                        + kernels[1017] * -10.0
                        + kernels[1018] * -10.0
                        + kernels[1019] * -10.0
                        + kernels[1020] * -4.947996242245
                        + kernels[1021] * -10.0
                        + kernels[1022] * -10.0
                        + kernels[1023] * -10.0
                        + kernels[1024] * -10.0
                        + kernels[1026] * -10.0
                        + kernels[1027] * -10.0
                        + kernels[1028] * -10.0
                        + kernels[1029] * -10.0
                        + kernels[1032] * -10.0
                        + kernels[1034] * -10.0
                        + kernels[1036] * -10.0
                        + kernels[1038] * -10.0
                        + kernels[1039] * -10.0
                        + kernels[1040] * -10.0
                        + kernels[1041] * -10.0
                        + kernels[1042] * -10.0
                        + kernels[1043] * -10.0
                        + kernels[1044] * -10.0
                        + kernels[1045] * -10.0
                        + kernels[1047] * -10.0
                        + kernels[1049] * -10.0
                        + kernels[1050] * -10.0
                        + kernels[1051] * -10.0
                        + kernels[1052] * -10.0
                        + kernels[1054] * -10.0
                        + kernels[1057] * -10.0
                        + kernels[1058] * -10.0
                        + kernels[1060] * -10.0
                        + kernels[1061] * -10.0
                        + kernels[1062] * -10.0
                        + kernels[1063] * -10.0
                        + kernels[1064] * -10.0
                        + kernels[1065] * -10.0
                        + kernels[1066] * -10.0
                        + kernels[1067] * -10.0
                        + kernels[1069] * -10.0
                        + kernels[1070] * -10.0
                        + kernels[1071] * -10.0
                        + kernels[1072] * -10.0
                        + kernels[1073] * -10.0
                        + kernels[1074] * -10.0
                        + kernels[1075] * -10.0
                        + kernels[1076] * -10.0
                        + kernels[1077] * -10.0
                        + kernels[1078] * -10.0
                        + kernels[1079] * -10.0
                        + kernels[1080] * -10.0
                        + kernels[1081] * -10.0
                        + kernels[1082] * -10.0
                        + kernels[1083] * -10.0
                        + kernels[1085] * -10.0
                        + kernels[1086] * -10.0
                        + kernels[1087] * -10.0
                        + kernels[1088] * -10.0
                        + kernels[1089] * -10.0
                        + kernels[1091] * -10.0
                        + kernels[1092] * -10.0
                        + kernels[1093] * -10.0
                        + kernels[1094] * -10.0
                        + kernels[1095] * -10.0
                        + kernels[1096] * -10.0
                        + kernels[1098] * -10.0
                        + kernels[1101] * -10.0
                        + kernels[1104] * -10.0
                        + kernels[1105] * -10.0
                        + kernels[1106] * -10.0
                        + kernels[1107] * -10.0
                        + kernels[1108] * -10.0
                        + kernels[1109] * -10.0
                        + kernels[1110] * -10.0
                        + kernels[1112] * -10.0
                        + kernels[1113] * -10.0
                        + kernels[1114] * -10.0
                        + kernels[1115] * -10.0
                        + kernels[1116] * -10.0
                        + kernels[1117] * -10.0
                        + kernels[1120] * -10.0
                        + kernels[1122] * -10.0
                        ;
                        decisions[2] = 46.998795877181
                        + kernels[433] * 10.0
                        + kernels[434] * 10.0
                        + kernels[435] * 10.0
                        + kernels[436] * 10.0
                        + kernels[437] * 10.0
                        + kernels[438] * 10.0
                        + kernels[439] * 10.0
                        + kernels[440] * 10.0
                        + kernels[441] * 10.0
                        + kernels[442] * 10.0
                        + kernels[443] * 10.0
                        + kernels[444] * 10.0
                        + kernels[445] * 10.0
                        + kernels[446] * 10.0
                        + kernels[447] * 10.0
                        + kernels[448] * 10.0
                        + kernels[449] * 10.0
                        + kernels[450] * 10.0
                        + kernels[452] * 10.0
                        + kernels[453] * 10.0
                        + kernels[454] * 10.0
                        + kernels[455] * 10.0
                        + kernels[456] * 10.0
                        + kernels[458] * 10.0
                        + kernels[459] * 10.0
                        + kernels[460] * 3.016772561808
                        + kernels[461] * 10.0
                        + kernels[462] * 10.0
                        + kernels[463] * 10.0
                        + kernels[464] * 10.0
                        + kernels[465] * 10.0
                        + kernels[466] * 10.0
                        + kernels[467] * 10.0
                        + kernels[468] * 10.0
                        + kernels[469] * 10.0
                        + kernels[470] * 10.0
                        + kernels[471] * 10.0
                        + kernels[472] * 10.0
                        + kernels[473] * 10.0
                        + kernels[474] * 10.0
                        + kernels[475] * 10.0
                        + kernels[476] * 10.0
                        + kernels[477] * 10.0
                        + kernels[478] * 10.0
                        + kernels[479] * 10.0
                        + kernels[480] * 10.0
                        + kernels[482] * 10.0
                        + kernels[483] * 10.0
                        + kernels[484] * 10.0
                        + kernels[485] * 10.0
                        + kernels[486] * 10.0
                        + kernels[488] * 10.0
                        + kernels[490] * 10.0
                        + kernels[491] * 10.0
                        + kernels[492] * 10.0
                        + kernels[493] * 10.0
                        + kernels[494] * 10.0
                        + kernels[495] * 10.0
                        + kernels[496] * 10.0
                        + kernels[498] * 10.0
                        + kernels[499] * 10.0
                        + kernels[500] * 10.0
                        + kernels[501] * 10.0
                        + kernels[502] * 10.0
                        + kernels[503] * 10.0
                        + kernels[504] * 10.0
                        + kernels[505] * 10.0
                        + kernels[506] * 10.0
                        + kernels[507] * 10.0
                        + kernels[508] * 10.0
                        + kernels[509] * 10.0
                        + kernels[510] * 10.0
                        + kernels[511] * 10.0
                        + kernels[512] * 10.0
                        + kernels[513] * 10.0
                        + kernels[515] * 10.0
                        + kernels[516] * 10.0
                        + kernels[517] * 10.0
                        + kernels[518] * 10.0
                        + kernels[519] * 10.0
                        + kernels[520] * 10.0
                        + kernels[521] * 10.0
                        + kernels[522] * 10.0
                        + kernels[523] * 10.0
                        + kernels[524] * 10.0
                        + kernels[525] * 10.0
                        + kernels[526] * 10.0
                        + kernels[527] * 10.0
                        + kernels[528] * 10.0
                        + kernels[529] * 10.0
                        + kernels[530] * 10.0
                        + kernels[531] * 10.0
                        + kernels[532] * 10.0
                        + kernels[533] * 10.0
                        + kernels[534] * 10.0
                        + kernels[535] * 10.0
                        + kernels[536] * 8.512452045731
                        + kernels[537] * 10.0
                        + kernels[538] * 10.0
                        + kernels[539] * 10.0
                        + kernels[540] * 10.0
                        + kernels[541] * 10.0
                        + kernels[542] * 10.0
                        + kernels[543] * 10.0
                        + kernels[544] * 10.0
                        + kernels[545] * 10.0
                        + kernels[546] * 10.0
                        + kernels[547] * 10.0
                        + kernels[548] * 10.0
                        + kernels[549] * 10.0
                        + kernels[550] * 10.0
                        + kernels[551] * 10.0
                        + kernels[552] * 10.0
                        + kernels[553] * 10.0
                        + kernels[554] * 10.0
                        + kernels[555] * 10.0
                        + kernels[556] * 10.0
                        + kernels[557] * 10.0
                        + kernels[558] * 10.0
                        + kernels[559] * 10.0
                        + kernels[560] * 10.0
                        + kernels[561] * 10.0
                        + kernels[562] * 10.0
                        + kernels[563] * 10.0
                        + kernels[564] * 10.0
                        + kernels[565] * 10.0
                        + kernels[566] * 10.0
                        + kernels[567] * 10.0
                        + kernels[568] * 10.0
                        + kernels[569] * 10.0
                        + kernels[570] * 10.0
                        + kernels[571] * 10.0
                        + kernels[572] * 10.0
                        + kernels[573] * 10.0
                        + kernels[574] * 10.0
                        + kernels[575] * 10.0
                        + kernels[576] * 10.0
                        + kernels[577] * 10.0
                        + kernels[578] * 10.0
                        + kernels[579] * 10.0
                        + kernels[580] * 10.0
                        + kernels[581] * 10.0
                        + kernels[582] * 10.0
                        + kernels[583] * 10.0
                        + kernels[584] * 10.0
                        + kernels[585] * 10.0
                        + kernels[586] * 10.0
                        + kernels[587] * 10.0
                        + kernels[588] * 10.0
                        + kernels[589] * 10.0
                        + kernels[590] * 10.0
                        + kernels[591] * 10.0
                        + kernels[593] * 10.0
                        + kernels[594] * 10.0
                        + kernels[595] * 10.0
                        + kernels[596] * 10.0
                        + kernels[597] * 10.0
                        + kernels[598] * 10.0
                        + kernels[599] * 10.0
                        + kernels[600] * 10.0
                        + kernels[601] * 10.0
                        + kernels[602] * 10.0
                        + kernels[603] * 10.0
                        + kernels[604] * 10.0
                        + kernels[605] * 10.0
                        + kernels[606] * 10.0
                        + kernels[607] * 10.0
                        + kernels[608] * 10.0
                        + kernels[609] * 10.0
                        + kernels[610] * 10.0
                        + kernels[611] * 10.0
                        + kernels[613] * 10.0
                        + kernels[614] * 10.0
                        + kernels[616] * 10.0
                        + kernels[617] * 10.0
                        + kernels[618] * 10.0
                        + kernels[619] * 10.0
                        + kernels[620] * 10.0
                        + kernels[621] * 10.0
                        + kernels[622] * 10.0
                        + kernels[623] * 10.0
                        + kernels[624] * 10.0
                        + kernels[625] * 10.0
                        + kernels[626] * 10.0
                        + kernels[627] * 10.0
                        + kernels[628] * 10.0
                        + kernels[629] * 10.0
                        + kernels[630] * 10.0
                        + kernels[631] * 10.0
                        + kernels[632] * 10.0
                        + kernels[633] * 10.0
                        + kernels[634] * 10.0
                        + kernels[635] * 10.0
                        + kernels[636] * 10.0
                        + kernels[637] * 10.0
                        + kernels[638] * 10.0
                        + kernels[639] * 10.0
                        + kernels[640] * 10.0
                        + kernels[641] * 10.0
                        + kernels[642] * 10.0
                        + kernels[643] * 10.0
                        + kernels[644] * 10.0
                        + kernels[645] * 10.0
                        + kernels[646] * 10.0
                        + kernels[647] * 10.0
                        + kernels[648] * 10.0
                        + kernels[649] * 10.0
                        + kernels[650] * 10.0
                        + kernels[651] * 10.0
                        + kernels[652] * 10.0
                        + kernels[654] * 10.0
                        + kernels[655] * 7.657419196881
                        + kernels[656] * 10.0
                        + kernels[657] * 10.0
                        + kernels[658] * 10.0
                        + kernels[659] * 10.0
                        + kernels[660] * 10.0
                        + kernels[661] * 10.0
                        + kernels[662] * 10.0
                        + kernels[663] * 10.0
                        + kernels[664] * 10.0
                        + kernels[665] * 10.0
                        + kernels[666] * 10.0
                        + kernels[667] * 10.0
                        + kernels[668] * 10.0
                        + kernels[669] * 10.0
                        + kernels[670] * 10.0
                        + kernels[671] * 10.0
                        + kernels[672] * 10.0
                        + kernels[673] * 10.0
                        + kernels[674] * 10.0
                        + kernels[675] * 10.0
                        + kernels[677] * 10.0
                        + kernels[678] * 10.0
                        + kernels[679] * 10.0
                        + kernels[680] * 10.0
                        + kernels[681] * 10.0
                        + kernels[682] * 10.0
                        + kernels[684] * 10.0
                        + kernels[685] * 10.0
                        + kernels[686] * 10.0
                        + kernels[687] * 10.0
                        + kernels[688] * 10.0
                        + kernels[689] * 10.0
                        + kernels[690] * 10.0
                        + kernels[692] * 10.0
                        + kernels[693] * 10.0
                        + kernels[694] * 10.0
                        + kernels[695] * 10.0
                        + kernels[696] * 10.0
                        + kernels[697] * 10.0
                        + kernels[698] * 10.0
                        + kernels[699] * 10.0
                        + kernels[700] * 10.0
                        + kernels[701] * 10.0
                        + kernels[702] * 10.0
                        + kernels[703] * 10.0
                        + kernels[704] * 10.0
                        + kernels[705] * 10.0
                        + kernels[706] * 10.0
                        + kernels[707] * -10.0
                        + kernels[708] * -10.0
                        + kernels[709] * -10.0
                        + kernels[711] * -10.0
                        + kernels[713] * -10.0
                        + kernels[714] * -10.0
                        + kernels[715] * -10.0
                        + kernels[718] * -10.0
                        + kernels[719] * -10.0
                        + kernels[720] * -10.0
                        + kernels[722] * -10.0
                        + kernels[727] * -10.0
                        + kernels[728] * -10.0
                        + kernels[729] * -10.0
                        + kernels[730] * -10.0
                        + kernels[731] * -10.0
                        + kernels[732] * -10.0
                        + kernels[733] * -10.0
                        + kernels[736] * -10.0
                        + kernels[737] * -10.0
                        + kernels[740] * -10.0
                        + kernels[743] * -0.814895102628
                        + kernels[744] * -10.0
                        + kernels[747] * -10.0
                        + kernels[748] * -10.0
                        + kernels[749] * -10.0
                        + kernels[750] * -10.0
                        + kernels[751] * -10.0
                        + kernels[752] * -10.0
                        + kernels[753] * -10.0
                        + kernels[754] * -10.0
                        + kernels[756] * -10.0
                        + kernels[758] * -10.0
                        + kernels[760] * -10.0
                        + kernels[761] * -10.0
                        + kernels[762] * -10.0
                        + kernels[763] * -10.0
                        + kernels[764] * -10.0
                        + kernels[766] * -10.0
                        + kernels[768] * -10.0
                        + kernels[769] * -10.0
                        + kernels[771] * -10.0
                        + kernels[772] * -10.0
                        + kernels[773] * -10.0
                        + kernels[774] * -10.0
                        + kernels[775] * -10.0
                        + kernels[776] * -10.0
                        + kernels[777] * -10.0
                        + kernels[780] * -10.0
                        + kernels[781] * -10.0
                        + kernels[783] * -10.0
                        + kernels[784] * -10.0
                        + kernels[787] * -10.0
                        + kernels[788] * -10.0
                        + kernels[790] * -10.0
                        + kernels[791] * -10.0
                        + kernels[793] * -10.0
                        + kernels[794] * -10.0
                        + kernels[795] * -10.0
                        + kernels[796] * -10.0
                        + kernels[797] * -10.0
                        + kernels[799] * -10.0
                        + kernels[801] * -10.0
                        + kernels[802] * -10.0
                        + kernels[805] * -10.0
                        + kernels[811] * -10.0
                        + kernels[812] * -10.0
                        + kernels[813] * -10.0
                        + kernels[815] * -10.0
                        + kernels[816] * -10.0
                        + kernels[818] * -10.0
                        + kernels[820] * -10.0
                        + kernels[821] * -10.0
                        + kernels[822] * -10.0
                        + kernels[824] * -10.0
                        + kernels[825] * -10.0
                        + kernels[828] * -10.0
                        + kernels[830] * -10.0
                        + kernels[831] * -10.0
                        + kernels[834] * -10.0
                        + kernels[835] * -10.0
                        + kernels[836] * -10.0
                        + kernels[837] * -10.0
                        + kernels[838] * -10.0
                        + kernels[839] * -10.0
                        + kernels[840] * -10.0
                        + kernels[843] * -10.0
                        + kernels[844] * -10.0
                        + kernels[845] * -10.0
                        + kernels[846] * -10.0
                        + kernels[847] * -10.0
                        + kernels[848] * -10.0
                        + kernels[850] * -10.0
                        + kernels[851] * -10.0
                        + kernels[852] * -10.0
                        + kernels[853] * -10.0
                        + kernels[854] * -10.0
                        + kernels[855] * -10.0
                        + kernels[856] * -10.0
                        + kernels[857] * -10.0
                        + kernels[860] * -10.0
                        + kernels[864] * -10.0
                        + kernels[865] * -10.0
                        + kernels[866] * -10.0
                        + kernels[868] * -10.0
                        + kernels[869] * -10.0
                        + kernels[870] * -10.0
                        + kernels[871] * -10.0
                        + kernels[873] * -4.251933538812
                        + kernels[874] * -10.0
                        + kernels[875] * -10.0
                        + kernels[876] * -10.0
                        + kernels[877] * -10.0
                        + kernels[879] * -10.0
                        + kernels[881] * -10.0
                        + kernels[884] * -10.0
                        + kernels[886] * -10.0
                        + kernels[887] * -10.0
                        + kernels[888] * -10.0
                        + kernels[889] * -10.0
                        + kernels[893] * -10.0
                        + kernels[895] * -10.0
                        + kernels[898] * -10.0
                        + kernels[901] * -10.0
                        + kernels[903] * -10.0
                        + kernels[905] * -10.0
                        + kernels[906] * -10.0
                        + kernels[908] * -10.0
                        + kernels[910] * -10.0
                        + kernels[911] * -10.0
                        + kernels[913] * -10.0
                        + kernels[914] * -10.0
                        + kernels[918] * -10.0
                        + kernels[919] * -10.0
                        + kernels[920] * -10.0
                        + kernels[921] * -10.0
                        + kernels[922] * -10.0
                        + kernels[923] * -10.0
                        + kernels[925] * -10.0
                        + kernels[926] * -10.0
                        + kernels[927] * -10.0
                        + kernels[928] * -10.0
                        + kernels[929] * -10.0
                        + kernels[931] * -10.0
                        + kernels[932] * -10.0
                        + kernels[933] * -10.0
                        + kernels[935] * -10.0
                        + kernels[937] * -10.0
                        + kernels[938] * -10.0
                        + kernels[939] * -10.0
                        + kernels[940] * -10.0
                        + kernels[946] * -10.0
                        + kernels[947] * -10.0
                        + kernels[948] * -10.0
                        + kernels[949] * -10.0
                        + kernels[950] * -10.0
                        + kernels[951] * -10.0
                        + kernels[952] * -10.0
                        + kernels[953] * -10.0
                        + kernels[954] * -10.0
                        + kernels[961] * -10.0
                        + kernels[966] * -10.0
                        + kernels[967] * -10.0
                        + kernels[969] * -10.0
                        + kernels[971] * -10.0
                        + kernels[975] * -10.0
                        + kernels[976] * -4.119815162981
                        + kernels[977] * -10.0
                        + kernels[979] * -10.0
                        + kernels[980] * -10.0
                        + kernels[982] * -10.0
                        + kernels[983] * -10.0
                        + kernels[984] * -10.0
                        + kernels[985] * -10.0
                        + kernels[986] * -10.0
                        + kernels[987] * -10.0
                        + kernels[988] * -10.0
                        + kernels[989] * -10.0
                        + kernels[990] * -10.0
                        + kernels[991] * -10.0
                        + kernels[994] * -10.0
                        + kernels[995] * -10.0
                        + kernels[997] * -10.0
                        + kernels[998] * -10.0
                        + kernels[1000] * -10.0
                        + kernels[1002] * -10.0
                        + kernels[1003] * -10.0
                        + kernels[1004] * -10.0
                        + kernels[1006] * -10.0
                        + kernels[1008] * -10.0
                        + kernels[1010] * -10.0
                        + kernels[1011] * -10.0
                        + kernels[1013] * -10.0
                        + kernels[1016] * -10.0
                        + kernels[1017] * -10.0
                        + kernels[1019] * -10.0
                        + kernels[1020] * -10.0
                        + kernels[1024] * -10.0
                        + kernels[1025] * -10.0
                        + kernels[1026] * -10.0
                        + kernels[1027] * -10.0
                        + kernels[1028] * -10.0
                        + kernels[1030] * -10.0
                        + kernels[1031] * -10.0
                        + kernels[1032] * -10.0
                        + kernels[1033] * -10.0
                        + kernels[1034] * -10.0
                        + kernels[1035] * -10.0
                        + kernels[1037] * -10.0
                        + kernels[1041] * -10.0
                        + kernels[1043] * -10.0
                        + kernels[1044] * -10.0
                        + kernels[1045] * -10.0
                        + kernels[1046] * -10.0
                        + kernels[1047] * -10.0
                        + kernels[1048] * -10.0
                        + kernels[1053] * -10.0
                        + kernels[1055] * -10.0
                        + kernels[1056] * -10.0
                        + kernels[1057] * -10.0
                        + kernels[1059] * -10.0
                        + kernels[1061] * -10.0
                        + kernels[1062] * -10.0
                        + kernels[1065] * -10.0
                        + kernels[1066] * -10.0
                        + kernels[1068] * -10.0
                        + kernels[1073] * -10.0
                        + kernels[1074] * -10.0
                        + kernels[1075] * -10.0
                        + kernels[1077] * -10.0
                        + kernels[1078] * -10.0
                        + kernels[1080] * -10.0
                        + kernels[1082] * -10.0
                        + kernels[1084] * -10.0
                        + kernels[1088] * -10.0
                        + kernels[1089] * -10.0
                        + kernels[1090] * -10.0
                        + kernels[1092] * -10.0
                        + kernels[1093] * -10.0
                        + kernels[1095] * -10.0
                        + kernels[1096] * -10.0
                        + kernels[1097] * -10.0
                        + kernels[1098] * -10.0
                        + kernels[1099] * -10.0
                        + kernels[1100] * -10.0
                        + kernels[1101] * -10.0
                        + kernels[1102] * -10.0
                        + kernels[1103] * -10.0
                        + kernels[1104] * -10.0
                        + kernels[1107] * -10.0
                        + kernels[1108] * -10.0
                        + kernels[1109] * -10.0
                        + kernels[1110] * -10.0
                        + kernels[1111] * -10.0
                        + kernels[1113] * -10.0
                        + kernels[1116] * -10.0
                        + kernels[1117] * -10.0
                        + kernels[1118] * -10.0
                        + kernels[1119] * -10.0
                        + kernels[1121] * -10.0
                        + kernels[1122] * -10.0
                        ;
                        votes[decisions[0] > 0 ? 0 : 1] += 1;
                        votes[decisions[1] > 0 ? 0 : 2] += 1;
                        votes[decisions[2] > 0 ? 1 : 2] += 1;
                        int val = votes[0];
                        int idx = 0;

                        for (int i = 1; i < 3; i++) {
                            if (votes[i] > val) {
                                val = votes[i];
                                idx = i;
                            }
                        }

                        return idx;
                    }

                protected:
                    /**
                    * Compute kernel between feature vector and support vector.
                    * Kernel type: linear
                    */
                    float compute_kernel(float *x, ...) {
                        va_list w;
                        va_start(w, 5);
                        float kernel = 0.0;

                        for (uint16_t i = 0; i < 5; i++) {
                            kernel += x[i] * va_arg(w, double);
                        }

                        return kernel;
                    }
                };
            }
        }
    }