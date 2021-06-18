using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp2
{
    public partial class Form1 : Form
    {
        int count = 0;
        int[] iData01 = new int[10];

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                int i;
                label1.Text = "";
                int Data = int.Parse(textBox1.Text);


                if (count >= 10)
                    label1.Text = "데이터는 10개만 입력할 수 있습니다!";
                else
                {
                    iData01[count] = Data;

                    for (i = 0; i <= count; i++)
                    {

                        label1.Text += "iarray[" + i + "] = " + iData01[i] + "       ";

                        if ((i + 1) % 2 == 0)
                            label1.Text += "\n";
                    }

                    count++;

                }

            }
            catch (Exception ex)
            {
                label1.Text = ex.Message;
            }
        }
    }
}
