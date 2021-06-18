using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Mediterm14_3
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
                int iData = int.Parse(textBox1.Text);
                int cnt = 1;
                int i, j;
                label3.Text = iData + "까지 발견된 소수는 다음과 같습니다.\n\n";

                if (iData >= 2 && iData <= 200)
                {
                    for (i = 2; i <= iData; i++)
                    {
                        for (j = 2; j <= i; j++)
                        {
                            if (i % j == 0)
                                break;
                        }
                        if (i == j)
                        {
                            label3.Text += i + ",";
                            cnt++;
                            if (cnt == 10)
                            {
                                label3.Text += "\n";
                                cnt = 1;
                            }
                        }
                    }

                    label3.Text = label3.Text.TrimEnd(',', ' ');
                }
                else
                    label3.Text = "2~200 사이의 수를 입력 해주세요.";
            }
            catch
            {
                label3.Text = "입력 값이 잘못되었습니다.";
            }
        }
    }
}
