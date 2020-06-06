/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, IMHandle, IMAccount, IMChat, CNContact, NSString;

@interface CKEntity : NSObject {

	BOOL _enlargedContactImage;
	UIImage* _transcriptContactImage;
	UIImage* _transcriptDrawerContactImage;
	IMHandle* _handle;
	IMAccount* _chatAccount;
	IMChat* _chat;
	CNContact* _cnContact;

}

@property (nonatomic,retain) IMHandle * handle;                                         //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) IMAccount * chatAccount;                                   //@synthesize chatAccount=_chatAccount - In the implementation block
@property (nonatomic,retain) IMChat * chat;                                             //@synthesize chat=_chat - In the implementation block
@property (nonatomic,retain) CNContact * cnContact;                                     //@synthesize cnContact=_cnContact - In the implementation block
@property (nonatomic,readonly) IMHandle * defaultIMHandle; 
@property (nonatomic,readonly) void* abRecord; 
@property (nonatomic,readonly) int propertyType; 
@property (nonatomic,readonly) int identifier; 
@property (nonatomic,readonly) BOOL isMe; 
@property (nonatomic,copy,readonly) NSString * abbreviatedDisplayName; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * fullName; 
@property (nonatomic,copy,readonly) NSString * rawAddress; 
@property (nonatomic,copy,readonly) NSString * originalAddress; 
@property (nonatomic,copy,readonly) NSString * IDSCanonicalAddress; 
@property (nonatomic,copy,readonly) NSString * textToneIdentifier; 
@property (nonatomic,copy,readonly) NSString * textVibrationIdentifier; 
@property (nonatomic,readonly) UIImage * transcriptContactImage;                        //@synthesize transcriptContactImage=_transcriptContactImage - In the implementation block
@property (nonatomic,readonly) UIImage * transcriptDrawerContactImage;                  //@synthesize transcriptDrawerContactImage=_transcriptDrawerContactImage - In the implementation block
@property (nonatomic,readonly) UIImage * locationMapViewContactImage; 
@property (nonatomic,readonly) UIImage * locationShareBalloonContactImage; 
@property (assign,nonatomic) BOOL enlargedContactImage;                                 //@synthesize enlargedContactImage=_enlargedContactImage - In the implementation block
+(id)copyEntityForAddressString:(id)arg1 ;
+(id)_copyEntityForAddressString:(id)arg1 onAccount:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(int)identifier;
-(IMHandle *)handle;
-(NSString *)fullName;
-(void)setHandle:(IMHandle *)arg1 ;
-(int)propertyType;
-(BOOL)isMe;
-(void)contactStoreDidChange:(id)arg1 ;
-(NSString *)rawAddress;
-(CNContact *)cnContact;
-(id)initWithIMHandle:(id)arg1 ;
-(NSString *)textToneIdentifier;
-(NSString *)textVibrationIdentifier;
-(void)setChat:(IMChat *)arg1 ;
-(id)cnContactWithKeys:(id)arg1 ;
-(IMChat *)chat;
-(UIImage *)locationShareBalloonContactImage;
-(IMHandle *)defaultIMHandle;
-(NSString *)IDSCanonicalAddress;
-(void*)abRecord;
-(id)personViewControllerWithDelegate:(id)arg1 isUnknown:(BOOL*)arg2 ;
-(BOOL)_allowedByScreenTime;
-(NSString *)originalAddress;
-(id)initWithChat:(id)arg1 imHandle:(id)arg2 ;
-(id)cnContactWithKeys:(id)arg1 shouldFetchSuggestedContact:(BOOL)arg2 ;
-(BOOL)enlargedContactImage;
-(id)_croppedImageFromImageData:(id)arg1 ;
-(void)_setBusinessInfoForMutableContact:(id)arg1 enlargedImageData:(id)arg2 ;
-(void)setCnContact:(CNContact *)arg1 ;
-(void)setEnlargedContactImage:(BOOL)arg1 ;
-(NSString *)abbreviatedDisplayName;
-(UIImage *)locationMapViewContactImage;
-(UIImage *)transcriptContactImage;
-(UIImage *)transcriptDrawerContactImage;
-(IMAccount *)chatAccount;
-(void)setChatAccount:(IMAccount *)arg1 ;
-(id)personViewControllerWithDelegate:(id)arg1 isUnknown:(BOOL*)arg2 contactStoreProvider:(id)arg3 ;
@end
