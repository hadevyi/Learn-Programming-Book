using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BasicGlobalVariable
{
    public partial class Form1 : Form
    {
        int iData = 0;

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                int iData01 = int.Parse(textBox1.Text);


                if (iData01 <= 0 || iData01 >= 1000)
                {
                    label5.Text = "정상적인 금액을 입금해주세요\n홍길동 계좌잔고 : " + iData + "원";
                }
                else
                {
                    iData += iData01;

                    label5.Text = "홍길동 계좌잔고 : " + iData + "원";
                }
            }
            catch
            {
                label5.Text = "결과에 이상이 있습니다.\n홍길동 계좌잔고 : " + iData + "원";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                int iData02 = int.Parse(textBox2.Text);


                if (iData <= iData02)
                {
                    label5.Text = "정상적인 금액을 출금해주세요\n김태희 계좌잔고 : " + iData + "원";
                }
                else
                {
                    iData -= iData02;

                    label5.Text = "김태희 계좌잔고 : " + iData + "원";
                }
            }
            catch
            {
                label5.Text = "결과에 이상이 있습니다.\n김태희 계좌잔고 : " + iData + "원";
            }
        }
    }
}
