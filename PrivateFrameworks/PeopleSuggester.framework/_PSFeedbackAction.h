/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PSSuggestion, NSString;

@interface _PSFeedbackAction : NSObject {

	long long _type;
	_PSSuggestion* _suggestion;
	NSString* _transportBundleID;

}

@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) _PSSuggestion * suggestion;                     //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,copy,readonly) NSString * transportBundleID;              //@synthesize transportBundleID=_transportBundleID - In the implementation block
+(id)engagementWithNonSuggestionWithEngagementIdentifier:(id)arg1 ;
+(id)engagementWithSuggestion:(id)arg1 transportBundleID:(id)arg2 ;
+(id)abandonment;
-(long long)type;
-(NSString *)transportBundleID;
-(_PSSuggestion *)suggestion;
-(id)initWithType:(long long)arg1 suggestion:(id)arg2 transportBundleID:(id)arg3 ;
@end

