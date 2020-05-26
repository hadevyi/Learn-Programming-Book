using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SWITCH_CALCULATE
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                double dData01 = double.Parse(textBox1.Text);
                double dData02 = double.Parse(textBox2.Text);

                char cData01 = char.Parse(textBox3.Text);

                if (textBox3.Text == "")
                {
                    label5.Text = "문자열의 길이는 1자여야 합니다.";
                }
                else
                {
                    switch (cData01)
                    {
                        case 'A':
                        case 'a':
                            double dData03 = dData01 + dData02;
                            label5.Text = "숫자 : \"" + dData01 + "\"와 숫자 : \"" + dData02 + "\"의 더하기 결과값은 -> " + dData03 + " 입니다.";
                            break;

                        case 'S':
                        case 's':
                            double dData04 = dData01 - dData02;
                            label5.Text = "숫자 : \"" + dData01 + "\"와 숫자 : \"" + dData02 + "\"의 빼기 결과값은 -> " + dData04 + " 입니다.";
                            break;

                        case 'M':
                        case 'm':
                            double dData05 = dData01 * dData02;
                            label5.Text = "숫자 : \"" + dData01 + "\"와 숫자 : \"" + dData02 + "\"의 곱하기 결과값은 -> " + dData05 + " 입니다.";
                            break;

                        case 'D':
                        case 'd':
                            double dData06 = dData01 / dData02;
                            label5.Text = "숫자 : \"" + dData01 + "\"와 숫자 : \"" + dData02 + "\"의 나누기 결과값은 -> " + dData06 + " 입니다.";
                            break;

                        default:
                            label5.Text = "Operation textBox에 문자 A, S, M, D 중 하나를 입력 하세요!";
                            break;
                    }

                }
            }
            catch (Exception Ex)
            {
                label5.Text = Ex.Message;
            }
        }
    }
}
