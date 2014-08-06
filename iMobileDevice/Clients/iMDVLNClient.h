//
//  iMDVLNClient.h
//  iMobileDevice
//
//  Created by Daniel Love on 01/07/2014.
//  Copyright (c) 2014 Daniel Love. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "iMDVLNDevice.h"
#import "iMDVLNClientProtocol.h"
#import "NSError+libimobiledevice.h"

@interface iMDVLNClient : NSObject

@property (nonatomic, assign) idevice_t idevice_t;

@property (nonatomic, readonly) iMDVLNDevice *device;

- (id) initWithDevice:(iMDVLNDevice *)device;

- (BOOL) connect:(NSError **)error;
- (BOOL) disconnect:(NSError **)error;

@end
