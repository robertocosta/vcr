/*
 * _coder_getPath_info.c
 *
 * Code generation for function '_coder_getPath_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getPath.h"
#include "_coder_getPath_info.h"

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
  xInputs = emlrtCreateLogicalMatrix(1, 1);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("getPath"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(1.0));
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
  const char * data[23] = {
    "789ced5dcb6fdbc81967b2c97673d896e833c5026d922e1669b7b09eb6ac2ddaca7ad89665c97ac5961d14364551122d3e248a7ae5521f5a608f8b02057a2850"
    "01bdb4a7cd716fdd3fa187b4088a1ef21ff4b2c702a9288a9638f558b438224d6a06b0c7a3cffc7ec38f1f7ffc34f37186b8934cdf2108e2eb845a9ebe52ebf7",
    "276d7252df25f40594df99d41f026daddc27eee98ed3e47f9cd4b428c84c5f561b1c2b30990e5f66a45143a078e6524d45e4598112e4e2a0c91012d316b92e53"
    "194baa2cc714599ed917671abbeca8c16fcf882e1b8a48f93b5667e846a1c31352bd3ded2e37db2066ecf329e4fcef19b4cf13887d4840fe3cf1abf8279e1a2b",
    "7bbab4e4e12999a3ca1e8e2d7b6a8c9ca5e4fa1aafefd71904f75d83fd026bad3c20de9b693d8dccc3336a87772078e44432bacce31a15debb407b8aa74a2a62"
    "a7cc3153bca149bc30144f2f7f9edc2f8d2fb57a89fd5e5fa8ec9145912b8b7d0fc373e36b3eb9fc154aa6aa1dc133b28d76f9adbcfeafbf2aff63cb5a7fb3da",
    "bfedc3eb43f419f5b7ef42f048401e4e0d9225598c877de73dff603dbd79982ad4e2d37e64e7e0cceb0701695ba57f08397e85efdb51791441e5670f21782420"
    "a7c50a23adb1a387ba2450dc9a40493556a0eb0db37c0e16583fb4a2e1bd5c104fd3bf3f074f935feb17ed3a253115cfd83693df1f4f2acd529e4b4ba9ae629d",
    "9f5cfcfa69fe15e6f725e159c5ef837e2f19a6b6abb5752f7d90100be7db9d502fe11e7e77fa7d0cf303a37e078b9b1f4cea87ba4f9f44d4faa349fd5364f1fb"
    "7d483fc889a4ca89a2f2ed0dc7efd33880e19428606c193be280bf463ec2f1bbd3f97db3153a28b6b8f87a235a2fe6760a722b1ea7b7ddc3ef43c8f12b7cdf12",
    "b3f1fb05449f51fbfc1082470272207e67dbd10ecbc94921d3e11989a56de3f5bf98c4db85e2e9e573fd43f9f9bf873e68a635dec2f8fd4f6ffe85f9dde9fc7e"
    "d06dc5b6aabbddcd622e38a013bce0df3ee17631bfbb9bdf3f44c6ef1f40f048400ef07b9ba6384a5ad3a276f3713b588c8ed398e5f7c41c3c4dbe18bf7facda",
    "69c6572ce4f7df45bf8ff9dde9fc5eae6f644b0227570a229fe808bb817222bab783f97d55f8fd33883ea3f6f931048f04e400bf53cd2637288cc96bbb23d032"
    "2b0a4921cb51b436b5aef5af69b27fdf98d33f4d5e9df4e2b44e09955180afe17f61123f3f075f932fc6ff7033da301fff797bfd9ff879b0243cab9e07fb7b29",
    "fab8950d6f1da78352dbdf64fdddd09e8be663f1fd7c75ad15bdffadb9ee7b805de33cf87b002a3cb5ac0a1efe1e8046ff1072fc6ae7e14cf9ddac9f7d0f8247"
    "027280df47a77e20a5a93e325ebf07b4a7fd5025749d1a3f4850f945048aa7972fc6eb9a79ac1cb727e43b0f701cef743e6f6732cf7a895eabb9dfca25b7f7ab",
    "99e81edf7551decd1072fc0adfb7c46c3e0dceabbc199ea6dfee7cac3348ff705ea533f0705e251afd66efe334443f09c8cdf2fbe391fc94e9cb12c377acfdde"
    "ad9430e6fb05f130df2f0b4f2dab8287f91e8d7eccf757f75fef77b14bbe37fbdeef8f2078242007f89e1685b69c1185022bd43846168538ab8e5cd9352e7f2b",
    "f81fea375799cb6afe27b63fff161ecf713affc742cf783ac0f885602e9f4fb49ad2065d0db8687c1ef3ffd5fdd7f9dda333bbc7ebd579c644cdb1ef5145a078"
    "7af9627ea299c7d23cfbdf7efa6f3cffea747ef7667a21bec8f22729365f49a4e274a15a1d44ddc3ef43c8f1ab7bdf8eca45fa92cf9b107d46edf33ed02680ff",
    "d3e46c5b505f059295158b9cfb3eec2fa1787ab9a1f9f82adb672a4d71e40e1e9d7d46a1ba85fef07b9c47e37c1edf09340685568de562c55823df8ad68a8d67"
    "0917e54f0e21c7631ebf1ecfa87dde03dac4e5ffa912b65d654726a93b95b73f81e2e9e537e76dd52e36e4c962de5e229e59defe0e048f04e4dd16936876e976",
    "b8d40b8862b65df0058e4f08f7f0f6ed7e4f7dcadb8fabacd496abaca5fef6e60c197fcfcb3f54784aa9ede2ef3f98c4db80e2e9e58bf0b7c2dd165ef7215e9f"
    "e0f6f2b6d178bb3068b2fc7a2b7fe463cb9560f224974dfbba2e8ab7f1fd3aeb5f5ed78c97589da78ec74b4ce38dcbaae0e1f11234facdbe6f9a83e8270139d2",
    "79cdd376a70c9c078c6f8dfadf5da0ad156d9d4872f6c38b4e645c3fea228bcbe7ad0f39e2314a209c3b1ebe9c752a467f78c696b1e1fdb40b1c9f2f11cfaa71"
    "95d656e7800f0e4a416f5ef277623e26dce533847bf87d08397e75ef5ba5a05b3f0caf0f09c3d3cbf1fa90f3f0d4b22a78787d4834fa71fcae961bc5ef5f4ee2",
    "f78b1eb2e7c00f20f8242057cc3032cf69559438516c9e8a5d46aa7262ef9456f6d5b26f1dc9970be269fab3401bc4d3e4378a1354b7bac65e963e0f9ebeba8f"
    "f3d49dfe3c68a712fd44fcc58bec5edf1f4cfbbdb1dc96cfeba2f7945e438e376ac72e443f09c851dfc78fafff87d33ac33595ed0dadf5cf1ddbe65d6dca9f67",
    "850ad34f0a329edf99143c1f6b0d1e9e8f45a31ff3bfb1f334e69f4964fc3f6f5c6674ea3cd577eefc2dd2bc49fd38e1d832d6e74d5e0cefe275c61ccff752cb"
    "db3c67dbc12d7e231b12b2e5522075d876d17b4b98ef8d9da721ffbcb096ef952dbb31df5fc5f7d305472de4fb3f63be773edfd7a8e3d041e028d30a95b7e4d8",
    "3a751064823917ad43e096f1fe33483f91fadfcb3eb2f508be0dc1230139309e22319cd8543e4795176a76bf90a149fc9fcfc1d7e48bf9cfd85c56af0f8fe779"
    "97886715ef53f58db4b8ceeeee4bdb3e51eae50b47e251c045fbbc9a5d4feb09443f09c89f8f6fda1a2b7bbab4a405664a8c5663e4ac3def2f8eca4f90f1b8d1",
    "bc3080c73946a8c975c2bef9d9e182789afe5fccc1d3e48bf1b66a1e8bc7e3f1ba614bc4b3ea3e2bee1f9e84f94a49da3a0a86fabec021efcda408ccdbcbe66d"
    "d8f535ea4fef40faa5e5db3cd47dea8fa87570526f201b67f91aa41fe44432397ddbf22b6febf53f83e0a2e393c87ffff61bcccf4ee767f1c541873a7891392e",
    "0a8d68ed28d4489d335102f3f3aaf0b3593ffb26a41f242007d7f1a564f573a7c6db3f9b83a7c9175cb79792270e83c749dc8167159f9f273836b97d12dfa172"
    "f95a72b71d7c16a328c23d7c6ef67d9638443f09c84ddcb78f47bf4f59bec9cdf6fb0cd22fb4fe76882cee863d5fc889649ccc42e0f755afdc4f719ace62e5f5",
    "7ffd5519f3f76de56fa3e3dc894e302355c359818f258a7478100bf4cfd32eca6719428e5fe1fb76541e218bc7f13e4a57e3e17d946e8aa79655c1c3fb28a1d1"
    "3f841cbfdafc8e6e7e13ef730de2e9e50eda2f17ef73bd443cbccf351afd8eca472cb3c2ecde48b3e77106e92752ff3b13ece679bc3fd2ad5b9f1fef8fb44c3c",
    "bc3f121afdb77b9d289bd767ff72ba3efb05441f5e47e67a3c4d7f166883789a1caf2363144f2dab8287d79141a31fc7f557d75a81c5f517107d46edf601048f"
    "04e457c4f54cbfb9c571223d96db15dfdfeef9f75933593e3e8ff36796886715ef27cb5b49df46b3d14d1cb68ebc8da8379863f7709cbf02f7af52a6fb7b5895",
    "377a0dcf67c4981aeb2bc52ebe371befa7a0787ab9797f99980be74dba0acf2ade97fda941a9552b1dd66b8d507e476eec65fb09bc8ef0a5be12443f09c891c4"
    "fbea708f2eecb7d4ffdeb4f038be49bc08144f2fc7e3f8303cb5ac0a1e1ec747a31ff3fcd5b55674fef77709d9b80ede270486a797e37d42e6e1a96555f0f03e",
    "2168f4dfd6f75ccf20b868fd6913d97b4ff3f21a2b6cbba9d476e5517e6612cf03c5d3cb9f274be9288ca7b5cb4e09358f62104bf75d7df3f6eddbff58c8c7ab"
    "8567d9784b92ab737dba70e20b6ef02cb7bbb199cb1ebb808fff07b10b6b56", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 54336U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_getPath_info.c) */
