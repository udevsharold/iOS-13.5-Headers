/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKEventStoreProvider.h>

@class EKEventStore, NSString;

@interface EKSharedEventStoreProvider : NSObject <EKEventStoreProvider> {

	EKEventStore* _sharedEventStore;

}

@property (nonatomic,readonly) EKEventStore * sharedEventStore;              //@synthesize sharedEventStore=_sharedEventStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)eventStore;
-(id)initWithEventStore:(id)arg1 ;
-(EKEventStore *)sharedEventStore;
@end

