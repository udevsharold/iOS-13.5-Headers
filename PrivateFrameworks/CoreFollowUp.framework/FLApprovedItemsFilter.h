/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface FLApprovedItemsFilter : NSObject {

	NSSet* _approvedItemIdentifiers;
	NSSet* _approvedClientIdentifiers;

}
+(id)sharedFilter;
-(unsigned long long)approvalStatusForItem:(id)arg1 ;
@end

