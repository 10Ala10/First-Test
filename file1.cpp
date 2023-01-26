#include <iostream>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n = 100u;
    int b;
    cin >> b;
    cout << n << " " << b << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                cout << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

//  Licensed to the Apache Software Foundation (ASF) under one
//  or more contributor license agreements.  See the NOTICE file
// Licensed to the Apache Software Foundation(ASF)

// Copyright (c) 2017 Intel Corporation
//
