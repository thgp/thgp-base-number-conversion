//
//  thgpViewController.h
//  binary
//
//  Created by Kurt Collins on 6/27/12.
//  Copyright (c) 2012 Enole. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface thgpViewController : UIViewController {
    
    UITextField *inputText;
    UITextField *outputText;
    
}

@property (nonatomic, retain) IBOutlet UITextField *inputText;
@property (nonatomic, retain) IBOutlet UITextField *outputText;

-(IBAction)base2:(id)sender;
-(IBAction)base3:(id)sender;
-(IBAction)base4:(id)sender;
-(IBAction)base5:(id)sender;
-(IBAction)base6:(id)sender;
-(IBAction)base7:(id)sender;
-(IBAction)base8:(id)sender;
-(IBAction)base9:(id)sender;

@end
