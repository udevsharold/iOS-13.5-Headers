/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WLKStoredConfiguration;

@interface WLKStoredConfigurationManager : NSObject {

	WLKStoredConfiguration* _storedConfiguration;

}

@property (nonatomic,retain) WLKStoredConfiguration * storedConfiguration;              //@synthesize storedConfiguration=_storedConfiguration - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_updateConfiguration:(id)arg1 ;
-(void)_handleLibraryChange:(id)arg1 ;
-(void)_handleAccountChange:(id)arg1 ;
-(void)_setStoredConfiguration:(id)arg1 ;
-(void)_invalidateWithReason:(id)arg1 ;
-(WLKStoredConfiguration *)storedConfiguration;
-(void)setStoredConfiguration:(WLKStoredConfiguration *)arg1 ;
@end

