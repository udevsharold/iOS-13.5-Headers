/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class OITSULinkedPointerSetEntry;

@interface OITSULinkedPointerSetEnumerator : NSEnumerator {

	OITSULinkedPointerSetEntry* mHead;
	OITSULinkedPointerSetEntry* mLastUsed;

}
-(id)nextObject;
-(id)initWithFirstEntry:(id)arg1 ;
@end

