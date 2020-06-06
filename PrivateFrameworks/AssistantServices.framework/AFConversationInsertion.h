/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AceObject, NSString, NSIndexPath;

@interface AFConversationInsertion : NSObject {

	BOOL _transient;
	long long _conversationItemType;
	AceObject* _aceObject;
	NSString* _aceCommandIdentifier;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) long long conversationItemType;                    //@synthesize conversationItemType=_conversationItemType - In the implementation block
@property (nonatomic,readonly) AceObject * aceObject;                             //@synthesize aceObject=_aceObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * aceCommandIdentifier;              //@synthesize aceCommandIdentifier=_aceCommandIdentifier - In the implementation block
@property (getter=isTransient,nonatomic,readonly) BOOL transient;                 //@synthesize transient=_transient - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                           //@synthesize indexPath=_indexPath - In the implementation block
-(NSIndexPath *)indexPath;
-(BOOL)isTransient;
-(AceObject *)aceObject;
-(NSString *)aceCommandIdentifier;
-(long long)conversationItemType;
-(id)initWithConversationItemType:(long long)arg1 aceObject:(id)arg2 aceCommandIdentifier:(id)arg3 transient:(BOOL)arg4 indexPath:(id)arg5 ;
@end

