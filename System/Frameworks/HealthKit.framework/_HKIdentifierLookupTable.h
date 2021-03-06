/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSMapTable;

@interface _HKIdentifierLookupTable : NSObject {

	NSMapTable* _identifierMapTable;
	os_unfair_lock_s _lookupTableSpinLock;

}
-(id)initWithDictionary:(id)arg1 ;
-(void)_insertCode:(long long)arg1 forIdentifier:(id)arg2 ;
-(void)setCode:(long long)arg1 forIdentifier:(id)arg2 ;
-(BOOL)codeForIdentifier:(id)arg1 code:(long long*)arg2 ;
-(void)enumerateCodesWithBlock:(/*^block*/id)arg1 ;
@end

