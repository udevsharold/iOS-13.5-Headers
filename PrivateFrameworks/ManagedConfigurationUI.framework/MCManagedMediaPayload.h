/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class MCBook;

@interface MCManagedMediaPayload : MCPayload {

	MCBook* _managedBook;

}

@property (nonatomic,retain) MCBook * managedBook;              //@synthesize managedBook=_managedBook - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)title;
-(void)setManagedBook:(MCBook *)arg1 ;
-(MCBook *)managedBook;
-(id)initWithManagedMedia:(id)arg1 profile:(id)arg2 ;
@end
