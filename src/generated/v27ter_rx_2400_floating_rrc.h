#define RX_PULSESHAPER_2400_GAIN        1.000000f
#define RX_PULSESHAPER_2400_COEFF_SETS  12
static const float rx_pulseshaper_2400_re[RX_PULSESHAPER_2400_COEFF_SETS][27] =
{
    {
           0.0055897353f,     /* Filter 0 */
          -0.0017768555f,
          -0.0013103940f,
          -0.0000000000f,
          -0.0158167680f,
          -0.0071354798f,
           0.0209536104f,
           0.0079805594f,
           0.0059737033f,
           0.0334507241f,
          -0.0366873785f,
          -0.1142993318f,
           0.0237732032f,
           0.1697241571f,
           0.0265507077f,
          -0.1445311926f,
          -0.0545612273f,
           0.0653773871f,
           0.0292370049f,
          -0.0049656640f,
           0.0120974973f,
          -0.0072670867f,
          -0.0228066104f,
          -0.0000000000f,
           0.0065619589f,
          -0.0004099816f,
           0.0051233099f
    },
    {
           0.0056661324f,     /* Filter 1 */
          -0.0017109303f,
          -0.0007708414f,
          -0.0000000000f,
          -0.0165439672f,
          -0.0072433070f,
           0.0206042610f,
           0.0071755753f,
           0.0076467868f,
           0.0359728632f,
          -0.0382251381f,
          -0.1171902140f,
           0.0240999725f,
           0.1704283439f,
           0.0264209157f,
          -0.1424503693f,
          -0.0531570681f,
           0.0626369632f,
           0.0270658031f,
          -0.0036203809f,
           0.0132414079f,
          -0.0073656400f,
          -0.0224159869f,
          -0.0000000000f,
           0.0058122224f,
          -0.0005708451f,
           0.0052884998f
    },
    {
           0.0057239310f,     /* Filter 2 */
          -0.0016362891f,
          -0.0002066397f,
          -0.0000000000f,
          -0.0172533640f,
          -0.0073359675f,
           0.0201882078f,
           0.0063201372f,
           0.0093733613f,
           0.0385302697f,
          -0.0397608538f,
          -0.1200263595f,
           0.0244107583f,
           0.1710059274f,
           0.0262716833f,
          -0.1402783754f,
          -0.0517306911f,
           0.0598999355f,
           0.0249301574f,
          -0.0023214919f,
           0.0143092559f,
          -0.0074421425f,
          -0.0219819125f,
          -0.0000000000f,
           0.0050747268f,
          -0.0007235567f,
           0.0054290965f
    },
    {
           0.0057623290f,     /* Filter 3 */
          -0.0015528738f,
           0.0003813736f,
          -0.0000000000f,
          -0.0179424453f,
          -0.0074126928f,
           0.0197040287f,
           0.0054142358f,
           0.0111521022f,
           0.0411200929f,
          -0.0412925136f,
          -0.1228037562f,
           0.0247051059f,
           0.1714560725f,
           0.0261032340f,
          -0.1380184057f,
          -0.0502840872f,
           0.0571697634f,
           0.0228323007f,
          -0.0010698185f,
           0.0153014454f,
          -0.0074971800f,
          -0.0215069309f,
          -0.0000000000f,
           0.0043511037f,
          -0.0008679402f,
           0.0055454595f
    },
    {
           0.0057805629f,     /* Filter 4 */
          -0.0014606490f,
           0.0009922677f,
          -0.0000000000f,
          -0.0186086705f,
          -0.0074727246f,
           0.0191503979f,
           0.0044579578f,
           0.0129815758f,
           0.0437393992f,
          -0.0428181071f,
          -0.1255184420f,
           0.0249825756f,
           0.1717780904f,
           0.0259158247f,
          -0.1356737711f,
          -0.0488192570f,
           0.0544498624f,
           0.0207743813f,
           0.0001339048f,
           0.0162185066f,
          -0.0075313657f,
          -0.0209936138f,
          -0.0000000000f,
           0.0036429017f,
          -0.0010038447f,
           0.0056380167f
    },
    {
           0.0057779068f,     /* Filter 5 */
          -0.0013596055f,
           0.0016250229f,
          -0.0000000000f,
          -0.0192494812f,
          -0.0075153229f,
           0.0185260951f,
           0.0034514727f,
           0.0148602405f,
           0.0463851645f,
          -0.0443356077f,
          -0.1281665483f,
           0.0252427568f,
           0.1719714956f,
           0.0257097307f,
          -0.1332478798f,
          -0.0473382129f,
           0.0517436041f,
           0.0187584474f,
           0.0012890415f,
           0.0170610995f,
          -0.0075453395f,
          -0.0204445393f,
          -0.0000000000f,
           0.0029515842f,
          -0.0011311490f,
           0.0057072442f
    },
    {
           0.0057536787f,     /* Filter 6 */
          -0.0012497586f,
           0.0022785281f,
          -0.0000000000f,
          -0.0198622982f,
          -0.0075397630f,
           0.0178299978f,
           0.0023950476f,
           0.0167864468f,
           0.0490542902f,
          -0.0458429864f,
          -0.1307442661f,
           0.0254852625f,
           0.1720360055f,
           0.0254852625f,
          -0.1307442661f,
          -0.0458429864f,
           0.0490542902f,
           0.0167864468f,
           0.0023950476f,
           0.0178299978f,
          -0.0075397630f,
          -0.0198622982f,
          -0.0000000000f,
           0.0022785281f,
          -0.0012497586f,
           0.0057536787f
    },
    {
           0.0057072442f,     /* Filter 7 */
          -0.0011311490f,
           0.0029515842f,
          -0.0000000000f,
          -0.0204445393f,
          -0.0075453394f,
           0.0170610995f,
           0.0012890415f,
           0.0187584474f,
           0.0517436041f,
          -0.0473382129f,
          -0.1332478798f,
           0.0257097307f,
           0.1719714956f,
           0.0252427568f,
          -0.1281665483f,
          -0.0443356077f,
           0.0463851645f,
           0.0148602405f,
           0.0034514727f,
           0.0185260951f,
          -0.0075153229f,
          -0.0192494812f,
          -0.0000000000f,
           0.0016250229f,
          -0.0013596055f,
           0.0057779068f
    },
    {
           0.0056380167f,     /* Filter 8 */
          -0.0010038447f,
           0.0036429017f,
          -0.0000000000f,
          -0.0209936138f,
          -0.0075313657f,
           0.0162185066f,
           0.0001339048f,
           0.0207743813f,
           0.0544498624f,
          -0.0488192570f,
          -0.1356737711f,
           0.0259158247f,
           0.1717780904f,
           0.0249825756f,
          -0.1255184420f,
          -0.0428181071f,
           0.0437393992f,
           0.0129815758f,
           0.0044579578f,
           0.0191503979f,
          -0.0074727246f,
          -0.0186086705f,
          -0.0000000000f,
           0.0009922677f,
          -0.0014606490f,
           0.0057805629f
    },
    {
           0.0055454595f,     /* Filter 9 */
          -0.0008679402f,
           0.0043511037f,
          -0.0000000000f,
          -0.0215069309f,
          -0.0074971800f,
           0.0153014454f,
          -0.0010698185f,
           0.0228323007f,
           0.0571697634f,
          -0.0502840872f,
          -0.1380184057f,
           0.0261032340f,
           0.1714560725f,
           0.0247051059f,
          -0.1228037562f,
          -0.0412925136f,
           0.0411200929f,
           0.0111521022f,
           0.0054142358f,
           0.0197040287f,
          -0.0074126928f,
          -0.0179424453f,
          -0.0000000000f,
           0.0003813736f,
          -0.0015528738f,
           0.0057623290f
    },
    {
           0.0054290965f,     /* Filter 10 */
          -0.0007235567f,
           0.0050747268f,
          -0.0000000000f,
          -0.0219819125f,
          -0.0074421425f,
           0.0143092559f,
          -0.0023214919f,
           0.0249301574f,
           0.0598999355f,
          -0.0517306911f,
          -0.1402783754f,
           0.0262716833f,
           0.1710059274f,
           0.0244107583f,
          -0.1200263595f,
          -0.0397608538f,
           0.0385302696f,
           0.0093733613f,
           0.0063201372f,
           0.0201882078f,
          -0.0073359675f,
          -0.0172533640f,
          -0.0000000000f,
          -0.0002066397f,
          -0.0016362891f,
           0.0057239310f
    },
    {
           0.0052884998f,     /* Filter 11 */
          -0.0005708451f,
           0.0058122224f,
          -0.0000000000f,
          -0.0224159869f,
          -0.0073656400f,
           0.0132414079f,
          -0.0036203809f,
           0.0270658031f,
           0.0626369632f,
          -0.0531570681f,
          -0.1424503693f,
           0.0264209157f,
           0.1704283439f,
           0.0240999725f,
          -0.1171902140f,
          -0.0382251381f,
           0.0359728632f,
           0.0076467868f,
           0.0071755753f,
           0.0206042610f,
          -0.0072433070f,
          -0.0165439672f,
          -0.0000000000f,
          -0.0007708414f,
          -0.0017109303f,
           0.0056661324f
    }
};
static const float rx_pulseshaper_2400_im[RX_PULSESHAPER_2400_COEFF_SETS][27] =
{
    {
           0.0028481124f,     /* Filter 0 */
           0.0054685989f,
          -0.0002075460f,
           0.0066437545f,
           0.0025051299f,
          -0.0219607487f,
          -0.0106763977f,
           0.0109842977f,
          -0.0059737033f,
           0.0243033737f,
           0.0720030344f,
          -0.0371381042f,
          -0.1500980975f,
           0.0000000000f,
           0.1676345711f,
           0.0469610312f,
          -0.1070824379f,
          -0.0474994521f,
           0.0292370049f,
           0.0068346502f,
           0.0061639827f,
           0.0223657932f,
          -0.0036122122f,
          -0.0160139260f,
          -0.0010393122f,
          -0.0012617935f,
          -0.0026104568f
    },
    {
           0.0028870387f,     /* Filter 1 */
           0.0052657019f,
          -0.0001220893f,
           0.0074134959f,
           0.0026203070f,
          -0.0222926068f,
          -0.0104983953f,
           0.0098763321f,
          -0.0076467868f,
           0.0261358150f,
           0.0750210576f,
          -0.0380774087f,
          -0.1521612376f,
           0.0000000000f,
           0.1668150966f,
           0.0462849307f,
          -0.1043266203f,
          -0.0455084176f,
           0.0270658031f,
           0.0049830269f,
           0.0067468343f,
           0.0226691090f,
          -0.0035503435f,
          -0.0152621568f,
          -0.0009205656f,
          -0.0017568807f,
          -0.0026946253f
    },
    {
           0.0029164885f,     /* Filter 2 */
           0.0050359799f,
          -0.0000327285f,
           0.0081920829f,
           0.0027326644f,
          -0.0225777865f,
          -0.0102864056f,
           0.0086989226f,
          -0.0093733613f,
           0.0279938795f,
           0.0780350694f,
          -0.0389989283f,
          -0.1541234619f,
           0.0000000000f,
           0.1658728803f,
           0.0455792071f,
          -0.1015271978f,
          -0.0435198506f,
           0.0249301574f,
           0.0031952595f,
           0.0072909301f,
           0.0229045595f,
          -0.0034815929f,
          -0.0144973559f,
          -0.0008037578f,
          -0.0022268784f,
          -0.0027662629f
    },
    {
           0.0029360533f,     /* Filter 3 */
           0.0047792542f,
           0.0000604036f,
           0.0089776236f,
           0.0028418041f,
          -0.0228139225f,
          -0.0100397041f,
           0.0074520562f,
          -0.0111521022f,
           0.0298754963f,
           0.0810411210f,
          -0.0399013592f,
          -0.1559818998f,
           0.0000000000f,
           0.1648093332f,
           0.0448448985f,
          -0.0986880778f,
          -0.0415362644f,
           0.0228323007f,
           0.0014724788f,
           0.0077964758f,
           0.0230739473f,
          -0.0034063632f,
          -0.0137219696f,
          -0.0006891471f,
          -0.0026712454f,
          -0.0028255527f
    },
    {
           0.0029453439f,     /* Filter 4 */
           0.0044954152f,
           0.0001571598f,
           0.0097681519f,
           0.0029473238f,
          -0.0229986814f,
          -0.0097576151f,
           0.0061358525f,
          -0.0129815758f,
           0.0317785336f,
           0.0840352668f,
          -0.0407834141f,
          -0.1577337746f,
           0.0000000000f,
           0.1636260777f,
           0.0440830805f,
          -0.0958131866f,
          -0.0395601407f,
           0.0207743813f,
          -0.0001843041f,
           0.0082637419f,
           0.0231791603f,
          -0.0033250618f,
          -0.0129383854f,
          -0.0005769789f,
          -0.0030895164f,
          -0.0028727130f
    },
    {
           0.0029439906f,     /* Filter 5 */
           0.0041844356f,
           0.0002573783f,
           0.0105616312f,
           0.0030488183f,
          -0.0231297855f,
          -0.0094395169f,
           0.0047505446f,
          -0.0148602405f,
           0.0337007947f,
           0.0870135294f,
          -0.0416438360f,
          -0.1593764942f,
           0.0000000000f,
           0.1623248514f,
           0.0432948606f,
          -0.0929064739f,
          -0.0375939289f,
           0.0187584474f,
          -0.0017742134f,
           0.0086930644f,
           0.0232221670f,
          -0.0032380969f,
          -0.0121489492f,
          -0.0004674850f,
          -0.0034813187f,
          -0.0029079862f
    },
    {
           0.0029316457f,     /* Filter 6 */
           0.0038463614f,
           0.0003608834f,
           0.0113559549f,
           0.0031458790f,
          -0.0232050046f,
          -0.0090848376f,
           0.0032965003f,
          -0.0167864468f,
           0.0356400280f,
           0.0899719266f,
          -0.0424813872f,
          -0.1609076145f,
           0.0000000000f,
           0.1609076145f,
           0.0424813872f,
          -0.0899719266f,
          -0.0356400280f,
           0.0167864468f,
          -0.0032965003f,
           0.0090848376f,
           0.0232050046f,
          -0.0031458790f,
          -0.0113559549f,
          -0.0003608834f,
          -0.0038463614f,
          -0.0029316457f
    },
    {
           0.0029079862f,     /* Filter 7 */
           0.0034813187f,
           0.0004674850f,
           0.0121489492f,
           0.0032380969f,
          -0.0232221670f,
          -0.0086930644f,
           0.0017742134f,
          -0.0187584474f,
           0.0375939290f,
           0.0929064739f,
          -0.0432948606f,
          -0.1623248514f,
           0.0000000000f,
           0.1593764942f,
           0.0416438359f,
          -0.0870135294f,
          -0.0337007947f,
           0.0148602405f,
          -0.0047505446f,
           0.0094395170f,
           0.0231297855f,
          -0.0030488183f,
          -0.0105616312f,
          -0.0002573783f,
          -0.0041844356f,
          -0.0029439906f
    },
    {
           0.0028727130f,     /* Filter 8 */
           0.0030895164f,
           0.0005769789f,
           0.0129383854f,
           0.0033250618f,
          -0.0231791603f,
          -0.0082637419f,
           0.0001843041f,
          -0.0207743813f,
           0.0395601407f,
           0.0958131866f,
          -0.0440830805f,
          -0.1636260777f,
           0.0000000000f,
           0.1577337746f,
           0.0407834141f,
          -0.0840352668f,
          -0.0317785336f,
           0.0129815758f,
          -0.0061358525f,
           0.0097576151f,
           0.0229986814f,
          -0.0029473238f,
          -0.0097681519f,
          -0.0001571598f,
          -0.0044954152f,
          -0.0029453439f
    },
    {
           0.0028255527f,     /* Filter 9 */
           0.0026712454f,
           0.0006891471f,
           0.0137219696f,
           0.0034063632f,
          -0.0230739473f,
          -0.0077964758f,
          -0.0014724788f,
          -0.0228323007f,
           0.0415362644f,
           0.0986880778f,
          -0.0448448985f,
          -0.1648093332f,
           0.0000000000f,
           0.1559818998f,
           0.0399013592f,
          -0.0810411210f,
          -0.0298754963f,
           0.0111521022f,
          -0.0074520562f,
           0.0100397041f,
           0.0228139225f,
          -0.0028418041f,
          -0.0089776236f,
          -0.0000604036f,
          -0.0047792542f,
          -0.0029360533f
    },
    {
           0.0027662629f,     /* Filter 10 */
           0.0022268784f,
           0.0008037578f,
           0.0144973559f,
           0.0034815929f,
          -0.0229045595f,
          -0.0072909301f,
          -0.0031952595f,
          -0.0249301574f,
           0.0435198506f,
           0.1015271978f,
          -0.0455792071f,
          -0.1658728803f,
           0.0000000000f,
           0.1541234619f,
           0.0389989283f,
          -0.0780350694f,
          -0.0279938795f,
           0.0093733613f,
          -0.0086989227f,
           0.0102864056f,
           0.0225777865f,
          -0.0027326644f,
          -0.0081920829f,
           0.0000327285f,
          -0.0050359799f,
          -0.0029164885f
    },
    {
           0.0026946253f,     /* Filter 11 */
           0.0017568807f,
           0.0009205656f,
           0.0152621568f,
           0.0035503435f,
          -0.0226691090f,
          -0.0067468343f,
          -0.0049830269f,
          -0.0270658031f,
           0.0455084176f,
           0.1043266203f,
          -0.0462849307f,
          -0.1668150966f,
           0.0000000000f,
           0.1521612376f,
           0.0380774087f,
          -0.0750210576f,
          -0.0261358150f,
           0.0076467868f,
          -0.0098763321f,
           0.0104983953f,
           0.0222926068f,
          -0.0026203070f,
          -0.0074134959f,
           0.0001220893f,
          -0.0052657019f,
          -0.0028870387f
    }
};
