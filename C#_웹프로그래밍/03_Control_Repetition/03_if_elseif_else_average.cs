using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace IF_ELSEIF_ELSE_AVERAGE
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
                double iData04 = (iData01 + iData02 + iData03) / 3.0;

                if (iData04 >= 90)
                {
                    label4.Text = "평균 : " + iData04 + ", 성적 : 수";
                }

                else if (iData04 >= 80)
                {
                    label4.Text = "평균 : " + iData04 + ", 성적 : 우";
                }
                else if (iData04 >= 70)
                {
                    label4.Text = "평균 : " + iData04 + ", 성적 : 미";
                }
                else if (iData04 >= 60)
                {
                    label4.Text = "평균 : " + iData04 + ", 성적 : 양";
                }
                else
                {
                    label4.Text = "평균 : " + iData04 + ", 성적 : 가";
                }
            }
            catch
            {
                label4.Text = "결과에 이상이 있습니다.";
            }
        }
    }
}
