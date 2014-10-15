//
//  View.h
//
//  Created by Robby on 4/9/14.
//  Copyright (c) 2014 Robby Kraft. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface OrientationView : NSOpenGLView

-(void) setOrientation:(float*)quaternion;

@property (nonatomic) BOOL screenTouched;

@property (nonatomic) BOOL deviceIsConnected;

@end