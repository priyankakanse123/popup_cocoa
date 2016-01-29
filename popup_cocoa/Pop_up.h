//
//  Pop_up.h
//  popup_cocoa
//
//  Created by BridgeLabz on 18/12/15.
//  Copyright © 2015 BridgeLabz. All rights reserved.
//

#ifndef Pop_up_h
#define Pop_up_h
#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>

@interface Pop_up : NSObject
{
    @private
    IBOutlet NSPopUpButton *pop;
    IBOutlet NSTextField *name;
    IBOutlet NSTextField *label;
    
}


-(IBAction)Add:sender;
-(IBAction)Update:sender;

@end

#endif /* Pop_up_h */
