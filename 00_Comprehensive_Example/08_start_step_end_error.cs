using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Mediterm16_2
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
                int iData01 = int.Parse(textBox1.Text);
                int iData02 = int.Parse(textBox2.Text);
                int iData03 = int.Parse(textBox3.Text);
                int iData = 0;
                label5.Text = "";

                if (iData01 <= 0 || iData02 <= 0 || iData03 < 0 || iData01 > 20 || iData02 > 20 || iData03 > 20)
                {
                    label5.Text = "1~20 사이의 숫자를 입력할 수 있습니다. 다시 입력해주세요.";
                }
                else if (iData03 == 0)
                {
                    label5.Text = "증가값이 0이 될 수는 없습니다. 다시 입력해주세요.";
                }
                else if (iData01 > iData02)
                {
                    label5.Text = "최소값이 최대값보다 클 수는 없습니다. 다시 입력해주세요.";
                }
                else if (textBox1.Text == "" || textBox2.Text == "" || textBox3.Text == "")
                {
                    label5.Text = "Text Box가 비어있습니다. 입력해주세요.";
                }
                else
                {
                    label5.Text = "최소값 : " + iData01 + "\n최대값 : " + iData02 + "\n증가값 : " + iData03 + "\n\n";

                    for (int i = iData01; i <= iData02; i += iData03)
                    {
                        label5.Text += i + " + ";

                        iData += i;
                    }

                    label5.Text = label5.Text.TrimEnd('+', ' ');
                    label5.Text += " = " + iData;
                }
            }
            catch (Exception ex)
            {
                label5.Text = ex.Message;
            }
        }
    }
}
