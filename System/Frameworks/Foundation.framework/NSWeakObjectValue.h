/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>

@interface NSWeakObjectValue : NSValue {

	void* _value;
	id _object;
	BOOL _useFallback;

}
-(const char*)objCType;
-(void)dealloc;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(void)getValue:(void*)arg1 ;
-(void)getValue:(void*)arg1 size:(unsigned long long)arg2 ;
-(BOOL)isEqualToValue:(id)arg1 ;
-(id)nonretainedObjectValue;
-(id)weakObjectValue;
@end
