using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Final16_2
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
                string str = textBox1.Text;
                string st;
                int[] arr = new int[13];    // 숫자만을 받는 배열
                int sum = 0;
                label3.Text = "";

                if (str.IndexOf('-') < 0)
                {
                    label3.Text = "'-'를 포함하여 작성해주세요.";
                }
                else if (str.Length != 14)
                {
                    label3.Text = "주민등록번호의 길이가 올바르지 않습니다.";
                }
                else if (str.Substring(6, 1) != "-")
                {
                    label3.Text = "'-'의 위치가 잘 못 되었습니다.";
                }
                else
                {
                    for (int i = 0; i < 14; i++)    //숫자만 찾아서 넣는 반복문('-'를 포함해서 14개라 14번 / 대신 6번째는 '-' 이까 제외시켜줄려고 if)
                    {
                        if (i <= 5)
                            arr[i] = int.Parse(str.Substring(i, 1));
                        else if(i>=7)
                            arr[i - 1] = int.Parse(str.Substring(i, 1));
                    }


                    for (int i = 0; i < 12; i++) //숫자 13개 중 12개만 연산 후 합하며
                    {
                        if (i <= 7)
                            sum += arr[i] * (i + 2);
                        else
                            sum += arr[i] * (i - 6);
                    }

                    if ((11 - (sum % 11))%10 == arr[12]) //연산 최종 값과 마지막 주민등록번호 숫자와 대조하는 것
                    {
                        label3.Text = "올바른 주민번호 입니다.";
                    }
                    else
                    {
                        label3.Text = "올바르지 않은 주민번호 입니다.";
                    }

                }
                
            }
            catch(Exception ex)
            {
                label3.Text = ex.Message;
            }
        }
    }
}
