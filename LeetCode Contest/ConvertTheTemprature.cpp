class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        double kelvin, fahrenheit;

        kelvin = celsius + 273.15;
        fahrenheit = celsius * 1.80 + 32.00;
        vector<double> ans;
        // ans[0] = kelvin;
        // ans[1] = fahrenheit;
        ans.push_back(kelvin);
        ans.push_back(fahrenheit);

        return ans;
    }
};