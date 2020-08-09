/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 7:58:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libAudioToolboxUtility.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface CAXPCObject : NSObject <NSSecureCoding> {

	NSObject*<OS_xpc_object> _object;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> object;              //@synthesize object=_object - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)object:(id)arg1 ;
-(void)dealloc;
-(NSObject*<OS_xpc_object>)object;
-(id)initWithObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(NSObject*<OS_xpc_object>)arg1 ;
@end
