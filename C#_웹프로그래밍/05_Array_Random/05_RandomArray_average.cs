using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Random10Average
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            label2.Text = "";
            int[] iData01;
            iData01 = new int[10];
            System.Random rData01 = new System.Random();

            int i;
            int count = 0;

            for (i = 0; i < iData01.Length; i++)
            {
                iData01[i] = rData01.Next(1, 100);

                label2.Text += "iarray[" + count + "] = " + iData01[i] + "     ";

                if (i % 2 == 1)
                {
                    label2.Text += "\n";
                }

                count++;
            }

            double sum = iData01[0];

            for (i = 1; i < iData01.Length; i++)
            {
                sum += iData01[i];
            }

            double dData01 = sum / iData01.Length;

            label2.Text += "\n\n10 개 원소 배열값의 평균은 " + dData01;
        }
    }
}
