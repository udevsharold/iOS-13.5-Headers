/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ConstantClasses.framework/ConstantClasses
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@interface _NSConstantArrayEnumerator : NSEnumerator {

	id* objects;
	unsigned long long capacity;
	unsigned long long index;

}
-(id)nextObject;
-(id)allObjects;
-(id)initWithArray:(id*)arg1 capacity:(unsigned long long)arg2 ;
@end

