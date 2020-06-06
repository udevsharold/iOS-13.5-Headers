/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSNotification.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface __CFNotification : NSNotification <NSCopying> {

	id _name;
	id _object;
	id _userInfo;
	BOOL _fouSemantics;
	BOOL _dyingObject;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)object;
-(id)userInfo;
-(id)initWithName:(CFStringRef)arg1 object:(const void*)arg2 userInfo:(CFDictionaryRef)arg3 foundation:(BOOL)arg4 ;
@end

