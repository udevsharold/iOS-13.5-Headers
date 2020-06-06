/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDatabaseResult.h>

@class NSString, NSSortDescriptor;

@interface WFRealmDatabaseResult : WFDatabaseResult {

	Class _objectClass;
	NSString* _predicateFormat;
	NSSortDescriptor* _sortDescriptor;

}

@property (nonatomic,readonly) Class objectClass;                                   //@synthesize objectClass=_objectClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * predicateFormat;                     //@synthesize predicateFormat=_predicateFormat - In the implementation block
@property (nonatomic,copy,readonly) NSSortDescriptor * sortDescriptor;              //@synthesize sortDescriptor=_sortDescriptor - In the implementation block
-(NSString *)predicateFormat;
-(Class)objectClass;
-(NSSortDescriptor *)sortDescriptor;
-(id)initWithBackingStore:(id)arg1 objectClass:(Class)arg2 predicateFormat:(id)arg3 sortDescriptor:(id)arg4 ;
-(void)notifyObserversAboutChange:(id)arg1 ;
@end

