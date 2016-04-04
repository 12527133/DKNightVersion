//
//  DKImage.h
//  DKNightVersion
//
//  Created by Draveness on 15/12/10.
//  Copyright © 2015年 DeltaX. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NSString DKThemeVersion;

typedef UIImage *(^DKImagePicker)(DKThemeVersion *themeVersion);

DKImagePicker DKImagePickerWithNames(NSString *normal, NSString *night);
DKImagePicker DKImagePickerWithImages(UIImage *normal, UIImage *night);

@interface DKImage : NSObject

+ (DKImagePicker)imageNamed:(NSString *)name;
+ (DKImagePicker)pickerWithNormalImage:(UIImage *)normalImage nightImage:(UIImage *)nightImage;

@end
