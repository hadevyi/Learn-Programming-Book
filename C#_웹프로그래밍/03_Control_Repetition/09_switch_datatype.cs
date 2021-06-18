using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SWITCH_DATATYPE
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string sData01 = textBox1.Text;

            if (textBox1.Text == "")
            {
                label3.Text = "10 가지 Data Type 중 하나를 입력 하세요!";
            }
            else
            {
                switch (sData01)
                {
                    case "int":
                        int iData01 = int.MinValue;
                        int iData02 = int.MaxValue;
                        label3.Text = "int의 허용값은 " + iData01 + " ~ " + iData02;
                        textBox1.Text = "";
                        break;
                    case "double":
                        double dData01 = double.MinValue;
                        double dData02 = double.MaxValue;
                        label3.Text = "double의 허용값은 " + dData01 + " ~ " + dData02;
                        textBox1.Text = "";
                        break;
                    case "byte":
                        byte bData01 = byte.MinValue;
                        byte bData02 = byte.MaxValue;
                        label3.Text = "byte의 허용값은 " + bData01 + " ~ " + bData02;
                        textBox1.Text = "";
                        break;
                    case "short":
                        short shData01 = short.MinValue;
                        short shData02 = short.MaxValue;
                        label3.Text = "short의 허용값은 " + shData01 + " ~ " + shData02;
                        textBox1.Text = "";
                        break;
                    case "long":
                        long lData01 = long.MinValue;
                        long lData02 = long.MaxValue;
                        label3.Text = "long의 허용값은 " + lData01 + " ~ " + lData02;
                        textBox1.Text = "";
                        break;
                    case "sbyte":
                        sbyte sbData01 = sbyte.MinValue;
                        sbyte sbData02 = sbyte.MaxValue;
                        label3.Text = "sbyte의 허용값은 " + sbData01 + " ~ " + sbData02;
                        textBox1.Text = "";
                        break;
                    case "ushort":
                        ushort uData01 = ushort.MinValue;
                        ushort uData02 = ushort.MaxValue;
                        label3.Text = "ushort의 허용값은 " + uData01 + " ~ " + uData02;
                        textBox1.Text = "";
                        break;
                    case "uint":
                        uint uiData01 = uint.MinValue;
                        uint uiData02 = uint.MaxValue;
                        label3.Text = "uint의 허용값은 " + uiData01 + " ~ " + uiData02;
                        textBox1.Text = "";
                        break;
                    case "ulong":
                        ulong ulData01 = ulong.MinValue;
                        ulong ulData02 = ulong.MaxValue;
                        label3.Text = "ulong의 허용값은 " + ulData01 + " ~ " + ulData02;
                        textBox1.Text = "";
                        break;
                    case "float":
                        float fData01 = float.MinValue;
                        float fData02 = float.MaxValue;
                        label3.Text = "float의 허용값은 " + fData01 + " ~ " + fData02;
                        textBox1.Text = "";
                        break;
                    default:
                        label3.Text = "\"" + sData01 + "\" 은 알수없는 Data Type 입니다!";
                        break;
                }
            }
        }
    }
}
