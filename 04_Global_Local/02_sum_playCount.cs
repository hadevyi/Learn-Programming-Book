using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ToNsum
{
    public partial class Form1 : Form
    {
        int iData0 = 0;

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                int iData = 0;
                int iData01 = int.Parse(textBox1.Text);

                if (iData01 < 1 || iData01 >= 50000)
                {
                    label2.Text = "1~50000 사이의 수만 입력해 주세요";
                }
                else
                {
                    for (int i = 0; i <= iData01; i++)
                    {
                        iData += i;
                        label2.Text = "합 : " + iData;
                    }

                    iData0++;
                }

                label3.Text = "프로그램 실행후 현재까지 이용횟수 : " + iData0 + "회";
            }
            catch
            {
                label2.Text = "결과에 이상이 있습니다";
            }
        }
    }
}
