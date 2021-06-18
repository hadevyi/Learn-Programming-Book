using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Mediterm16_3
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
                label3.Text = "";
                int iData = 0;

                if (iData01 <= 1 || iData01 > 200)
                {
                    label3.Text = "2~200 사이의 숫자만 입력가능합니다. 다시 입력하세요.";
                }
                else if (textBox1.Text == "")
                {
                    label3.Text = "Text Box가 비어있습니다. 입력해주세요.";
                }
                else
                {
                    for (int i = 2; i <= iData01; i++)
                    {
                        for (int j = 2; j <= i; j++)
                        {
                            if (i % j == 0)
                            {
                                if (i == j)
                                {
                                    label3.Text += i + ", ";

                                    iData++;

                                    if (iData % 10 == 0)
                                    {
                                        label3.Text += "\n";
                                    }
                                }
                                else
                                {
                                    break;
                                }
                            }
                        }
                    }
                    label3.Text = label3.Text.TrimEnd(',', ' ');
                }
            }
            catch (Exception ex)
            {
                label3.Text = ex.Message;
            }
        }
    }
}
