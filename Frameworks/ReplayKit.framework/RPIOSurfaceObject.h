/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RPIOSurfaceObject : NSObject <NSSecureCoding> {

	IOSurfaceRef _ioSurface;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(IOSurfaceRef)ioSurface;
-(void)setIOSurface:(IOSurfaceRef)arg1 ;
@end

