//
//  Pop_up.m
//  popup_cocoa
//
//  Created by BridgeLabz on 18/12/15.
//  Copyright © 2015 BridgeLabz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Pop_up.h"
@implementation Pop_up

-(void)awakeFromNib
{
    
}

-(IBAction)Add:sender
{
    [pop addItemWithTitle:[name stringValue]];
}
-(IBAction)Update:sender
{
    [label setStringValue:[pop titleOfSelectedItem]];
}

@end
