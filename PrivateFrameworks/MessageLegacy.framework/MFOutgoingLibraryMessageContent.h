/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFOutgoingMessageContent.h>

@class MFLibraryMessage;

@interface MFOutgoingLibraryMessageContent : MFOutgoingMessageContent {

	MFLibraryMessage* _libraryMessage;

}

@property (nonatomic,retain) MFLibraryMessage * libraryMessage;              //@synthesize libraryMessage=_libraryMessage - In the implementation block
-(id)copy;
-(id)headers;
-(MFLibraryMessage *)libraryMessage;
-(id)libraryContent;
-(void)setLibraryMessage:(MFLibraryMessage *)arg1 ;
@end

