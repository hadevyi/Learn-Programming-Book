using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace PersonNumber
{
    public partial class Form1 : Form
    {
        string[] sData;

        public Form1()
        {
            InitializeComponent();

            sData = new string[13];
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                string sData01 = textBox1.Text;
                int sum = 0;
                if (sData01.IndexOf("-") >= 0)
                {
                    label2.Text = "-빼고 입력해주세요.";
                }
                else if (sData01.Length != 13)
                {
                    label3.Text = "정확히 입력하세요.";
                }
                else
                {
                    for (int i = 0; i < 12; i++)
                    {
                        sum += int.Parse(sData01.Substring(i, 1)) * ((i % 8) + 2);
                    }
                    if (((11 - (sum % 11)) % 10) == int.Parse(sData01.Substring(12, 1)))
                    {
                        label3.Text = "올바른 주민번호 입니다.";
                    }
                    else
                    {
                        label3.Text = "정확히 입력하세요.";
                    }
                }
            }
            catch
            {
                label3.Text = "정확히 입력하세요.";
            }
        }
    }
}
