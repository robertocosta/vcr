/*
 * _coder_costs_info.c
 *
 * Code generation for function '_coder_costs_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "costs.h"
#include "_coder_costs_info.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[4] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 4, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 2);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("costs"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.3.0.713579 (R2017b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[24] = {
    "789ced5d4bace35619f6b433652a54f0a23c0aa5eda0322a1a71f37e0d6898bce3dc3c6f32f755a13b8ee324bef12bb6e39bcc02658340ac0009c102a9576253"
    "56cc82050b16952ab101b12a08baeaae482c912a2484449cc4b9b17bcfc437f67562e71c69e4ebf9e2f31dfffecfe7dfc7e7fc466e60c51b08827c6efc4fd9fe",
    "e71fc8a4bc34dd20e86cfb1ca22d7afcc66cfb0dddbe5a6e213735c7a9f8af665b82632572204d77688a254b7da6410ae31d1667c879354d8ea1589c95ea439e"
    "440452e468996c4e90164593758a210bdcc24e8e1aef30990568bea340cadfc90e49746b7d06113ae24573e9c51d64c13e23c0f9df34689f3700f64175f8dbe9",
    "efa5ee7bda94e49109c1c3e0128d373c34d5f0109c28893b8cda9ec700be170cb647bf55cb8bc8ed85bd571f2ee3337afe3775fbc8fc775384e50446d95ac5f7"
    "826eff826f8a34b97e83262ff8ce4df2c5807c5afc6dac7038b9c4d34bebf7fa220d8fc47174831b7848869e5cebd9651f6f5a7dd6a3986687991d6fdff51ffd",
    "b8fbe6dfe2f6fa9b9de7b75ebe01a03ea3fef645001faac3bde15a2edb3bcb1102150db29546af1865fba98b765496f02c6b0702d8b7abfe73c0f1dbdb6f95f2"
    "1dcb74fb16800f9d219438be2d23e6755b5f40d7432d9b7cfd497afc8767629975e8f6f9471ffe15eaf635f199d5ed2f00f8501dde8bf7cb4c707818f4ee09fe",
    "7ed247c664a684b847b7df051c6fd48e3940fda80e5f59b7ef10ca0302d61a3f8f900245d8ea6fe7f443ab9e3b5e07f0a13a9ce09aa4b0438d1fc60416a77728"
    "31d1a768096367a7bfb6b87c63fc44f9776f6225cf3dd54c1ebd99ec7c3e1bbd03757e7375de687c5e967bc9782b2747ebd5e0904833ac3f734ce7a0ce6f85ce",
    "bf473b2e4e77d3f80a8cd3ddcb07e3746bea3f071cbfbdfd56296fc2f81cd9b0fb3b8ccf27655bf8607c6e4dfd66fb6f02503faac3578fcfdb24cbab6f076df6"
    "b7f748cb74fe15001faac3753adfa0717167c00a8c7f863b55e793403e2dbe9acedf53ece499d8691611d8a8f31ff71ec0f7a49baaf346e3f81a9b6aa7bbfca3",
    "6a26563c8cf0523389897504eabcfbfbaf52fc96e9fc57007ca80ebf4ce72956990035c5d7f53ed5ac9fa496f0a9b8193f99da69ea2836fac96bff1e7d0075fe"
    "9af8ec8ae7130d3c2e264ac18a4c47abac24450fbabd5e16eafc76e87c78dde336139def8be48940b694bfd7a6f34f57e453ebc796f0a9b8193f59b0d33ac6f9",
    "a0de5f239f5d7a2fc48bc15abc952c1369513cc5f7b14e2cc524dda3f7bf071c6fd48e3540fda80eb740efef34489a3b3b913a02297638baa9398fc780765aea"
    "7f23cc32fdff1a800fd5e197e9ffa205ec9a5f4f747065518565714216c8a7c5cdf8cddc4e63f5b7d14f92def7e1b8bdd375bfd8dc8f954bd17e36936f967a5c",
    "b9f228f52490768feec3385f5bb4fe16b14ce75f05f0a13a5ca7f36ad83a1fba77eab87d06c8a7c557f493999d2e5cc5463ff9e7efbe05c7ed9daef371ff2955"
    "ed54642a33f4ed62746c58ac3e8ac1f19c6de8bf63717f68d9fcc9e7017ce80c21f9e9c2e075c5ebbf34c91701f269f1abcfc31a5bc6d6f87cf4e7efc375a98e",
    "d7ed262de53319918f65252ae127e2a94c433c70d1ba54d85f17fdebae65f1f857017ca80effd47cc90ccde152727caf5aaf8e6ff6fbd54533d9fd7e75f4d3db"
    "2f425d77baae9fb50214334cfbbd39a1d0adf9e2c16cad5d4e405d77a7ae7b2d8bbf3f03e04367c8f8944f94187c1b74bb72b50bcf0b948c4ba4676622dbe7c5",
    "fc22f10a1c2f77ba6eb3c7a7d15d21dfcd660b0181239f7051ae1272513c0efbafb65cd77aa615e7b9b794b0b338fe3f7a863b55e72d5b0f71697c7e61267542"
    "8c8df1f9cfa0ce3b5fe7e568201821f3bbe5562a261d47f0bd429262e07aa6797d70bcdc18dfb2785d20719aa1d8b5e9f8b949be6f03f9b4f8d59fd36696b17f",
    "9dd27f9f83e32b8ed76f422ad5c3fe24d62ba5f30d39d0ef1d167c7e17cd6b39071cbfbdfd5629f7e7bacd03ea336a9fcf02f8501dae3c8ca81aae14a7c6e357"
    "c92f60e2b96dee1c70dcc51d7cb6e97938c4d06281dd1dc8d1533cbf9fc14215188f6f45ff1d9737e0b80b628d9fc07117abf8a6655bf8e0b88b35f5c371176d",
    "b9ae719765ba2af684c9c754d635dfdcecfbf128904f8b5fedf94d4927a458c6d6fbfb6f1ede85baed74dd0e66d3ad8e378c9d96d3014caa5459564ea65ca4db"
    "b0bf5ecf3cc515d70d51628a63708a4d0b02a7898fcd8efb7c7e497b547c6c7942a238f6a483b3cdb1b05b757f4f2fe157f155e72d2e986d12a2dbe8373ff853",
    "028eab6faace1bcdff45178b8db42f900c9d5104911679b973d4de45dca3f3b0ff6a0b282f0c88cfa89d6eebf691f9efa608258a3c2e88e4bae2f373937c0f80"
    "7c5afc2af77bc522ca1d5fb58dbdcf67a31f963e8171faa6eab7d1383d44efe5ceb862341b78946b4788e493fc1e5683f3ce5d1aa7bff5d02aff7a19c087ea70",
    "5d9c4eeae3f3c726dbb1c9ef4581fe208e1b45363dd3bbf9ec9eaebfb593d35bba8d7afeaf3fdc85f1b8d3f59cad1f5571ff51ee3820cbfdf4a1ec0b3079ca45"
    "79bba09e2ffad78e65e32e2be6df15099cc6851d75f4dcbcaeeb0ba83d6a71c6fad07b533bcd7c64b1dd8f01edb2f27b1a7ff918c6e99baaeb46c759a2fd42cd",
    "bb1f28c7052c90660ff37b61762f8c405d77bbaeff04509f51bb7c13c087ea709daee33c4f0f6b13d1cacc46b631b642e3c42ccdfac68caf9bcde3b9b7845fc5"
    "57d37db019ed9f0f83fc560cc1f87e53ef0346e3fb427e9738ea5562f1a3625010fd3ce597237917ad3785fdf9f2ad5adc1effabfc76e76b84f1bf557cd3b22d",
    "7c30feb7a67e380f525bb4f32013eb9eef4eb14d7250a4d8be38c39daaf3d73bdffdc24c6b88071efc4f84dfddd8549d371adf9f32a1443a31ac1e938c4c4b41"
    "b29409c4fa2e7a1f0b755e5b3651e7eb1443ea75deacff7f69497b54fcb2f660ace424fd9f980feabfbbf8ecd27fe6882804c2955ab6c0e723cd54b12773079d",
    "0cd4ffadd07fe442ffcdfadb97017ca80ebf4c6f2b745f749beec797b443c54de8be62b6757c6f0feafe35f2d9a5fbb95aeef0b016281f4859bcdc3dc5768bed"
    "d019fc1ec796e87ed2b2b8ff35001faac395e40de3d33f697102cd71fc092793424bf9cc20d12189eefae6f13c5d914fadbfa2dbd7f3a9f895e6014cdde619f6",
    "b2759ee65b1fdc82ef719daef7e26e7a904e3d7952c90ffcc1a2df9bacc67d5e17e523fb3be078a3769401f5a33adcea7e7ce7d93f38e990344f0a76fb67d6b6"
    "3c0894d8a294eda6c5ff66e7878597b443c50df9538b1a904d9e1bb7d6a3d8cbe678e1fca30fe1fb5ca7eb7f6dc8534ca8b777e0a31acd20765cad147db28be6",
    "f1c0fe7af9f73e78407d46edf2926e1fd1fd4ec52991ed33a44011d29057e66cae6bbdd5b949beef02f9b4f8d5fd60c13ef67effe5e7302f99f3f53b1be80e6b"
    "bd364527ebc9ee5e2fd1ae771fa55da4df307e37769ec6fc13b32c7e5f365f667cea0c3e70aededf07f269f1abe7a19e5a660d7928cf61fe78e7ebbdd0f3f2a7",
    "94188c33e14a84ad340e03bbfba28be6e540bd37769e86fc7364afde2ba9e6a1de5fa6f7f3cf0ed8a9f7bf867aef7cbd6fe3479172e0a0d48b34e25232849783"
    "64b00adfc7ceeb73f5fbd851d232fd7e1ec087ce10bc61ed77b5edce3b7c3ddfe555d65d8f2d63ebb8cce85d9877d8f9badd6b349aad20df28d72b35a1caf9b2",
    "59ba1074519c0efbebf57c07e475001faac33f957738d1a76809634bd3d164c7ae8bb224afd933f2946acd64eb7c9977e0fb52e7eb7a59ee25e3ad9c1cad5783"
    "4322cdb0fecc310df3c9bb54d7bd96e9fa8aeba066790dd4e8dcb979cd924bf854dc5c5e83a98f2cb6fb31a05d16eafaf08ff7a1ae3b5dd74f43d96abb59ddc7",
    "6299922fb6dfa886daad0acc57e97a5dff11a03ea376f93a800fd5e1cbf39a4d7f67d5fc1cb3f9cc9e9ae4df5dc2afe296e53fb2ffbbbe279f84e1f8bad3753f"
    "5e694b6c7010aaf34d7e0f2b5485e3d271c445ba0ffbf1e5edd7fa5dce7571febac66f609c6f15dfb46c0b1f8cf3cdd5ff7f09fcb09c",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 55824U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_costs_info.c) */
